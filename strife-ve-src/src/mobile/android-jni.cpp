#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <jni.h>
#include <android/log.h>
#include <unistd.h>

#include "SDL_beloko_extra.h"

#ifdef ANTI_HACK
#include "s-setup/s-setup.h"
#endif

#include "TouchControlsContainer.h"
#include "JNITouchControlsUtils.h"

#include "UI_TouchDefaultSettings.h"


extern "C"
{


#include "game_interface.h"
#include "SDL_keycode.h"

#undef LOGI
#undef LOGW
#undef LOGE

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO,"JNI", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "JNI", __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR,"JNI", __VA_ARGS__))

//#define JAVA_FUNC(x) Java_com_beloko_opengames_chocdoom_NativeLib_##x
#define JAVA_FUNC(x) Java_org_libsdl_app_NativeLib_##x

    int android_screen_width;
    int android_screen_height;

#define KEY_SHOOT        0x1001
#define KEY_SHOW_INV     0x1006
#define KEY_SHOW_KBRD    0x1008
#define KEY_POPUP        0x1009
#define KEY_ACHIEVMENT   0x100A


#define DEFAULT_FADE_FRAMES 10

    touchscreemode_t currentScreenMode = TS_BLANK;

    float gameControlsAlpha = 0.5;
    bool turnMouseMode = true;
    bool invertLook = false;
    bool precisionShoot = false;
    bool showSticks = true;
    bool hideTouchControls = true;
    bool enableWeaponWheel = true;

    bool shooting = false;


    static int controlsCreated = 0;
    touchcontrols::TouchControlsContainer controlsContainer;

    touchcontrols::TouchControls *UI_tc = 0;

    touchcontrols::TouchControls *tcMenuMain = 0;
    touchcontrols::TouchControls *tcGameMain = 0;
    touchcontrols::TouchControls *tcAutomap = 0;
    touchcontrols::TouchControls *tcWeaponWheel = 0;
    touchcontrols::TouchControls *tcInventory = 0;
    touchcontrols::TouchControls *tcBackButton = 0;
    touchcontrols::TouchControls *tcPopupButtons = 0;
    touchcontrols::TouchControls *tcPopupBg = 0;
    touchcontrols::TouchControls *tcYesNo = 0;

//So can hide and show these buttons
    touchcontrols::TouchJoy *touchJoyLeft;
    touchcontrols::TouchJoy *touchJoyRight;

    touchcontrols::Button *touchButtonSave;
    touchcontrols::Button *touchButtonLoad;

    extern JNIEnv* env_;

    static GLint     matrixMode;
    static GLfloat   projection[16];
    static GLfloat   model[16];

    void openGLStart()
    {
        glGetIntegerv( GL_MATRIX_MODE, &matrixMode );
        glGetFloatv( GL_PROJECTION_MATRIX, projection );
        glGetFloatv( GL_MODELVIEW_MATRIX, model );

        glMatrixMode( GL_PROJECTION );
        glLoadIdentity();

        glViewport( 0, 0, android_screen_width, android_screen_height );
        glOrthof( 0.0f, android_screen_width, android_screen_height, 0.0f, -1.0f, 1.0f );

        glMatrixMode( GL_MODELVIEW );
        glLoadIdentity();
    }

    void openGLEnd()
    {

        glEnableClientState( GL_COLOR_ARRAY );

        glMatrixMode( GL_MODELVIEW );
        glLoadMatrixf( model );

        glMatrixMode( GL_PROJECTION );
        glLoadMatrixf( projection );

        if( matrixMode == GL_MODELVIEW )
        {
            glMatrixMode( GL_MODELVIEW );
        }
        else if( matrixMode == GL_TEXTURE )
        {
            glMatrixMode( GL_TEXTURE );
        }
    }

    void gameSettingsButton( int state )
    {
        if( state == 1 )
        {
            //showTouchSettings();
            controlsContainer.uiControls = UI_tc;
            UI_tc->setEnabled( true );
            UI_tc->fade( touchcontrols::FADE_IN, 10 );
        }
    }


    static jclass NativeLibClass = 0;
    static jmethodID swapBuffersMethod = 0;
    static void swapBuffers()
    {
        if( NativeLibClass == 0 )
        {
            NativeLibClass = env_->FindClass( "com/beloko/opengames/chocdoom/NativeLib" );
            swapBuffersMethod = env_->GetStaticMethodID( NativeLibClass, "swapBuffers", "()V" );
        }
        env_->CallStaticVoidMethod( NativeLibClass, swapBuffersMethod );
    }

    static void showAchievements()
    {
        LOGI("showAchievements");
        /*
        jclass clazz = env_->FindClass( "com/beloko/opengames/chocdoom/Game" );
        jmethodID method = env_->GetStaticMethodID( clazz, "showAchievements", "()V" );
        env_->CallStaticVoidMethod( clazz, method );
        */
    }


    extern unsigned int Sys_Milliseconds( void );

    static unsigned int reload_time_down;
    void gameButton( int state, int code )
    {
        if( code == KEY_SHOOT )
        {
            shooting = state;
            PortableAction( state, PORT_ACT_ATTACK );
        }
        else if( code == KEY_SHOW_INV )
        {
            if( state == 1 )
            {
                if( !tcInventory->enabled )
                {
                    tcInventory->animateIn( 5 );
                }
                else
                {
                    tcInventory->animateOut( 5 );
                }
            }
        }
        else if( code == KEY_SHOW_KBRD )
        {
            if( state )
            {
                toggleKeyboard();
            }
        }
        else if( code == KEY_POPUP )
        {
            if( state )
            {
                if( tcPopupButtons->isEnabled() )
                {
                    tcPopupButtons->setEnabled( false );
                }
                else
                {
                    tcPopupButtons->setEnabled( true );
                    tcPopupButtons->fade( touchcontrols::FADE_IN, DEFAULT_FADE_FRAMES );
                }
            }
        }
        else if( code == KEY_ACHIEVMENT )
        {
            if( state )
                showAchievements();
        }
        else
        {
            PortableAction( state, code );
        }
    }


//Weapon wheel callbacks
    void weaponWheelSelected( int enabled )
    {
        if( enabled )
        {
            tcWeaponWheel->fade( touchcontrols::FADE_IN, 5 );    //fade in
        }
    }

    void weaponWheel( int segment )
    {
        LOGI( "weaponWheel %d", segment );
        PortableAction( 1, PORT_ACT_WEAP1 + segment );
    }

    void backButton( int state, int code )
    {
         PortableKeyEvent( state, SDL_SCANCODE_ESCAPE, 0 );
         /*
        if( state == 1 )
        {
            PortableKeyEvent( 1, SDL_SCANCODE_ESCAPE, 0 );
            PortableKeyEvent( 0, SDL_SCANCODE_ESCAPE, 0 );
        }
        */
    }


    // The keys popup is different, there are mutliple pages which need
    // tapping through
    extern char  st_showkeys;
    extern int              st_keypage;

    void popupButtons( int state, int code )
    {
        if( code == PORT_ACT_SHOW_KEYS)
        {
            if( state )
            {
                PortableAction( 1, code );
                PortableAction( 0, code );
            }
        }
        else
        {
            if( state )
            {
                PortableAction( 1, code );
            }
        }
    }

    void popupClearButton( int state, int code )
    {
        if( st_keypage != -1 ) // We want to tap through (potentially) multiple pages
        {
            LOGI("show keys %d", state);
            PortableAction( state, PORT_ACT_SHOW_KEYS );
        }
        else
        {
            PortableAction( 0, PORT_ACT_SHOW_WEAPONS );
            PortableAction( 0, PORT_ACT_SHOW_KEYS );
            PortableAction( 0, PORT_ACT_HELPCOMP );
        }
    }


    static int left_double_action;
    static int right_double_action;

    void left_double_tap( int state )
    {
        //LOGTOUCH("L double %d",state);
        if( left_double_action )
        {
            PortableAction( state, left_double_action );
        }
    }

    void right_double_tap( int state )
    {
        //LOGTOUCH("R double %d",state);
        if( right_double_action )
        {
            PortableAction( state, right_double_action );
        }
    }



    //To be set by android
    float strafe_sens, forward_sens;
    float pitch_sens, yaw_sens;

    void left_stick( float joy_x, float joy_y, float mouse_x, float mouse_y )
    {
        joy_x *= 10;
        //float strafe = joy_x*joy_x;
        float strafe = joy_x;
        //if (joy_x < 0)
        //  strafe *= -1;

        PortableMove( joy_y * 15 * forward_sens, -strafe * strafe_sens );
    }

    void right_stick( float joy_x, float joy_y, float mouse_x, float mouse_y )
    {
        //LOGI(" mouse x = %f",mouse_x);
        int invert = invertLook ? -1 : 1;

        float scale;


        scale = ( shooting && precisionShoot ) ? 0.3 : 1;

        PortableLookPitch( LOOK_MODE_MOUSE, -mouse_y  * pitch_sens * invert * scale );

        if( turnMouseMode )
        {
            PortableLookYaw( LOOK_MODE_MOUSE, mouse_x * 2 * yaw_sens * scale );
        }
        else
        {
            PortableLookYaw( LOOK_MODE_JOYSTICK, joy_x * 6 * yaw_sens * scale );
        }

    }

    void mouse_move( int action, float x, float y, float dx, float dy )
    {
        LOGI( "mouse_move %f %f %f %f", x, y, dx, dy );
        PortableMouseAbs( x * 320, y * 200 );
        /*
        if (action == TOUCHMOUSE_TAP)
        {
            PortableMouseButton(1,1);
            PortableMouseButton(0,1);
        }
        */
        if( action == TOUCHMOUSE_DOWN )
        {
            PortableMouseButton( 1, 1 );
        }
        else if( action == TOUCHMOUSE_UP )
        {
            PortableMouseButton( 0, 1 );
        }
    }

    void inventoryButton( int state, int code )
    {
        if( state == BUTTONEXT_DOUBLE )
        {
            // Select
            PortableAction( 1, code );
            PortableAction( 0, code );

            // Use
            PortableAction( 1, PORT_ACT_INVUSE );
            //PortableAction(0,PORT_ACT_INVUSE);
        }
    }

    void automapMouseMove( int action, float x, float y, float dx, float dy )
    {

        if( action == MULTITOUCHMOUSE_MOVE )
        {
            PortableAutomapControl( 0, dx, dy );
        }
        else if( action == MULTITOUCHMOUSE_ZOOM )
        {
            PortableAutomapControl( x * 5, 0, 0 );
        }
    }

    void automapButton( int state, int code )
    {
        if( state )
        {
            PortableAction( 1, PORT_ACT_MAP );
            PortableAction( 0, PORT_ACT_MAP );
        }
    }

    void setHideSticks( bool v )
    {
        if( touchJoyLeft )
        {
            touchJoyLeft->setHideGraphics( v );
        }
        if( touchJoyRight )
        {
            touchJoyRight->setHideGraphics( v );
        }
    }

    void settingsChange( touchcontrols::tTouchSettings settings )
    {
        tcGameMain->setAlpha( settings.alpha );

        invertLook      = settings.invertLook;

        strafe_sens = settings.moveSensitivity;
        forward_sens = settings.moveSensitivity;

        pitch_sens = settings.lookSensitivity;
        yaw_sens = settings.lookSensitivity;

        if( settings.showLoadSave )
        {
            LOGI("show");
            touchButtonSave->setHidden ( false );
            touchButtonLoad->setHidden ( false );
        }
        else
        {
            LOGI("hide");
            touchButtonSave->setHidden ( true );
            touchButtonLoad->setHidden ( true );
        }

        showSticks = settings.showJoysticks;
    }

    void initControls( int width, int height, const char * graphics_path )
    {
        touchcontrols::GLScaleWidth = ( float )width;
        touchcontrols::GLScaleHeight = ( float )height;

        LOGI( "initControls %d x %d,x path = %s", width, height, graphics_path );

        if( !controlsCreated )
        {
            LOGI( "creating controls" );

            touchcontrols::setGraphicsBasePath( graphics_path );
            setControlsContainer( &controlsContainer );

            controlsContainer.openGL_start.connect( sigc::ptr_fun( &openGLStart ) );
            controlsContainer.openGL_end.connect( sigc::ptr_fun( &openGLEnd ) );


            tcMenuMain = new touchcontrols::TouchControls( "menu", true, false );
            tcGameMain = new touchcontrols::TouchControls( "game", false, true, 1 );
            tcAutomap = new touchcontrols::TouchControls( "automap", false, false );
            tcInventory  = new touchcontrols::TouchControls( "inventory", false, false );
            tcWeaponWheel = new touchcontrols::TouchControls( "weapon_wheel", false, true );
            tcBackButton = new touchcontrols::TouchControls( "back_button", false, false );
            tcPopupButtons = new touchcontrols::TouchControls( "popups", false, true, 1 );
            tcPopupBg = new touchcontrols::TouchControls( "popups", false, false );
            tcYesNo = new touchcontrols::TouchControls( "yes_no", false, false );

            // Back button
            tcBackButton->addControl( new touchcontrols::Button( "back_button", touchcontrols::RectF( 0, 0, 8, 8 ), "ui_back_arrow", PORT_ACT_MENU_BACK ) );
            //tcBackButton->setPassThroughTouch( false ); //Stop touch going to the mouse on the menu
            tcBackButton->signal_button.connect( sigc::ptr_fun( &backButton ) );

            //Menu
            touchcontrols::Mouse *mouse = new touchcontrols::Mouse( "mouse", touchcontrols::RectF( 2, 0, 24, 16 ), "" ); //left 2 to avoid back button
            mouse->setHideGraphics( true );
            tcMenuMain->addControl( mouse );
            tcMenuMain->addControl( new touchcontrols::Button( "achievements_button", touchcontrols::RectF( 24, 0, 26, 2 ), "achievements", KEY_ACHIEVMENT ) );
            mouse->signal_action.connect( sigc::ptr_fun( &mouse_move ) );
            tcMenuMain->signal_button.connect( sigc::ptr_fun( &gameButton ) );

            // Yes No
            tcYesNo->addControl( new touchcontrols::Button( "yes", touchcontrols::RectF( 8, 10, 11, 13 ), "yes?F=N", PORT_ACT_MENU_CONFIRM ) );
            tcYesNo->addControl( new touchcontrols::Button( "no", touchcontrols::RectF( 14, 10, 17, 13 ), "no?F=N", PORT_ACT_MENU_ABORT ) );
            tcYesNo->setAlpha(1);
            tcYesNo->signal_button.connect( sigc::ptr_fun( &gameButton ) );

            //Game
            tcGameMain->setAlpha( gameControlsAlpha );
            tcGameMain->addControl( new touchcontrols::Button( "attack", touchcontrols::RectF( 19, 6, 22, 9 ), "shoot", KEY_SHOOT ) );
            tcGameMain->addControl( new touchcontrols::Button( "use", touchcontrols::RectF( 22, 5, 25, 8 ), "use", PORT_ACT_USE ) );
            tcGameMain->addControl( new touchcontrols::Button( "map", touchcontrols::RectF( 2, 0, 4, 2 ), "map", PORT_ACT_MAP ) );
            //tcGameMain->addControl(new touchcontrols::Button("keyboard",touchcontrols::RectF(8,0,10,2),"keyboard",KEY_SHOW_KBRD));
            tcGameMain->addControl( new touchcontrols::Button( "gamma", touchcontrols::RectF( 20, 0, 22, 2 ), "gamma", PORT_ACT_GAMMA ) );
            tcGameMain->addControl( new touchcontrols::Button( "show_popup", touchcontrols::RectF( 4, 0, 6, 2 ), "inventory", KEY_POPUP ) );
            tcGameMain->addControl( new touchcontrols::Button( "jump", touchcontrols::RectF( 24, 3, 26, 5 ), "jump", PORT_ACT_JUMP ) );


            touchButtonSave = new touchcontrols::Button( "quick_save", touchcontrols::RectF( 24, 0, 26, 2 ), "save", PORT_ACT_QUICKSAVE ) ;
            touchButtonLoad = new touchcontrols::Button( "quick_load", touchcontrols::RectF( 22, 0, 24, 2 ), "load", PORT_ACT_QUICKLOAD ) ;
            tcGameMain->addControl( touchButtonSave );
            tcGameMain->addControl( touchButtonLoad );

            tcGameMain->addControl( new touchcontrols::Button( "next_weapon", touchcontrols::RectF( 0, 3, 3, 5 ), "next_weap", PORT_ACT_NEXT_WEP ) );
            tcGameMain->addControl( new touchcontrols::Button( "prev_weapon", touchcontrols::RectF( 0, 6, 3, 8 ), "prev_weap", PORT_ACT_PREV_WEP ) );

            touchJoyLeft = new touchcontrols::TouchJoy( "stick", touchcontrols::RectF( 0, 6, 9, 16 ), "move_joystick1" );
            tcGameMain->addControl( touchJoyLeft );
            touchJoyLeft->signal_move.connect( sigc::ptr_fun( &left_stick ) );
            touchJoyLeft->signal_double_tap.connect( sigc::ptr_fun( &left_double_tap ) );

            touchJoyRight = new touchcontrols::TouchJoy( "touch", touchcontrols::RectF( 17, 6, 26, 16 ), "look_joystick" );
            tcGameMain->addControl( touchJoyRight );
            touchJoyRight->signal_move.connect( sigc::ptr_fun( &right_stick ) );
            touchJoyRight->signal_double_tap.connect( sigc::ptr_fun( &right_double_tap ) );

            tcGameMain->signal_button.connect( sigc::ptr_fun( &gameButton ) );
            tcGameMain->signal_settingsButton.connect( sigc::ptr_fun( &gameSettingsButton ) );

            //Popup buttons
            tcPopupButtons->addControl( new touchcontrols::Button( "show_strife_weapons", touchcontrols::RectF( 4, 2, 7, 5 ), "ammo", PORT_ACT_SHOW_WEAPONS ) );
            tcPopupButtons->addControl( new touchcontrols::Button( "show_keys",           touchcontrols::RectF( 4, 5, 7, 8 ), "key", PORT_ACT_SHOW_KEYS ) );
            tcPopupButtons->addControl( new touchcontrols::Button( "mission",             touchcontrols::RectF( 4, 8, 7, 11 ), "notebook", PORT_ACT_HELPCOMP ) );
            tcPopupButtons->signal_button.connect( sigc::ptr_fun( &popupButtons ) );
            tcPopupButtons->setAlpha( 0.8);

            //Popup Background
            tcPopupBg->addControl( new touchcontrols::Button( "clear_popups", touchcontrols::RectF( 0, 0, 26, 16 ), "", PORT_ACT_SHOW_WEAPONS ) );
            tcPopupBg->signal_button.connect( sigc::ptr_fun( &popupClearButton ) );

            //Map control
            touchcontrols::MultitouchMouse *multimouse = new touchcontrols::MultitouchMouse( "gamemouse", touchcontrols::RectF( 0, 0, 26, 16 ), "" );
            multimouse->setHideGraphics( true );
            tcAutomap->addControl( multimouse );
            multimouse->signal_action.connect( sigc::ptr_fun( &automapMouseMove ) );
            tcAutomap->addControl( new touchcontrols::Button( "map_back", touchcontrols::RectF( 0, 0, 2, 2 ), "ui_back_arrow", SDL_SCANCODE_1 ) );
            tcAutomap->signal_button.connect( sigc::ptr_fun( &automapButton ) );
            tcAutomap->setAlpha( 0.8 );

            //Weapon wheel
            touchcontrols::WheelSelect *wheel = new touchcontrols::WheelSelect( "weapon_wheel", touchcontrols::RectF( 7, 2, 19, 14 ), "weapon_wheel", 8 );
            wheel->signal_selected.connect( sigc::ptr_fun( &weaponWheel ) );
            wheel->signal_enabled.connect( sigc::ptr_fun( &weaponWheelSelected ) );
            tcWeaponWheel->addControl( wheel );
            tcWeaponWheel->setAlpha( 0.5 );


            //Inventory
            tcInventory->addControl( new touchcontrols::ButtonExt( "inv_0", touchcontrols::RectF( 3.38, 13.8, 6.26, 16 ), "", PORT_ACT_INVSLOT0 ) );
            tcInventory->addControl( new touchcontrols::ButtonExt( "inv_1", touchcontrols::RectF( 6.26, 13.8, 9.07, 16 ), "", PORT_ACT_INVSLOT1 ) );
            tcInventory->addControl( new touchcontrols::ButtonExt( "inv_2", touchcontrols::RectF( 9.07, 13.8, 11.94, 16 ), "", PORT_ACT_INVSLOT2 ) );
            tcInventory->addControl( new touchcontrols::ButtonExt( "inv_3", touchcontrols::RectF( 11.94, 13.8, 14.73, 16 ), "", PORT_ACT_INVSLOT3 ) );
            tcInventory->addControl( new touchcontrols::ButtonExt( "inv_4", touchcontrols::RectF( 14.73, 13.8, 17.60, 16 ), "", PORT_ACT_INVSLOT4 ) );
            tcInventory->addControl( new touchcontrols::ButtonExt( "inv_5", touchcontrols::RectF( 17.60, 13.8, 20.31, 16 ), "", PORT_ACT_INVSLOT5 ) );

            tcInventory->signal_button.connect( sigc::ptr_fun( &inventoryButton ) );
            tcInventory->setAlpha( 0.5 );

            touchcontrols::getSettingsSignal()->connect( sigc::ptr_fun( &settingsChange ) );
            UI_tc = touchcontrols::createDefaultSettingsUI( &controlsContainer, ( std::string )graphics_path +  "/touch_settings.xml" );
            UI_tc->setAlpha( 1 );
            //UI_tc->setEnabled( true );

            // Need to be the first added
            controlsContainer.addControlGroup( UI_tc );
            controlsContainer.addControlGroup( tcBackButton );
            controlsContainer.addControlGroup( tcGameMain );
            controlsContainer.addControlGroup( tcPopupBg );
            controlsContainer.addControlGroup( tcPopupButtons );
            controlsContainer.addControlGroup( tcAutomap );
            controlsContainer.addControlGroup( tcMenuMain );
            controlsContainer.addControlGroup( tcYesNo );
#ifdef CHOC_DOOM
            controlsContainer.addControlGroup( tcWeaponWheel );
#endif
            controlsContainer.addControlGroup( tcInventory );
            controlsCreated = 1;

            tcGameMain->setXMLFile( ( std::string )graphics_path +  "/game_choc.xml" );
            tcInventory->setXMLFile( ( std::string )graphics_path +  "/inventory_choc.xml" );
            tcWeaponWheel->setXMLFile( ( std::string )graphics_path +  "/weaponwheel_choc.xml" );
            tcAutomap->setXMLFile( ( std::string )graphics_path +  "/automap_choc.xml" );
            tcPopupButtons->setXMLFile( ( std::string )graphics_path +  "/popup_buttons.xml" );
        }
        else
        {
            LOGI( "NOT creating controls" );
        }
    }

    void updateTouchScreenMode( touchscreemode_t mode )
    {
        // LOGI("updateTouchScreenModeA %d",mode);

        if( mode != currentScreenMode )
        {

            //first disable the last screen and fade out is necessary
            switch( currentScreenMode )
            {
            case TS_BLANK:
                //tcBlank->resetOutput();
                //tcBlank->setEnabled(false);
                break;
            case TS_MENU:
                tcMenuMain->resetOutput();
                tcMenuMain->fade( touchcontrols::FADE_OUT, DEFAULT_FADE_FRAMES );
                tcBackButton->fade( touchcontrols::FADE_OUT, DEFAULT_FADE_FRAMES );
                tcBackButton->resetOutput();
                break;
           case TS_YES_NO:
                tcYesNo->resetOutput();
                tcYesNo->fade( touchcontrols::FADE_OUT, DEFAULT_FADE_FRAMES );
                break;
            case TS_GAME:
                tcGameMain->resetOutput();
                tcGameMain->fade( touchcontrols::FADE_OUT, DEFAULT_FADE_FRAMES );
                tcBackButton->fade( touchcontrols::FADE_OUT, DEFAULT_FADE_FRAMES );
                tcBackButton->resetOutput();
                tcWeaponWheel->setEnabled( false );
                tcInventory->setEnabled( false );
                tcPopupButtons->setEnabled( false );
                break;
            case TS_MAP:
                tcAutomap->resetOutput();
                tcAutomap->fade( touchcontrols::FADE_OUT, DEFAULT_FADE_FRAMES );
                break;
            case TS_POPUP:
                tcPopupBg->resetOutput(); //Reset so it clears it when you press backbutton
                tcPopupBg->setEnabled( false );
                break;
            }

            //Enable the current new screen
            switch( mode )
            {
            case TS_BLANK:
                //tcBlank->setEnabled(true);
                break;
            case TS_MENU:
                tcMenuMain->setEnabled( true );
                tcMenuMain->fade( touchcontrols::FADE_IN, DEFAULT_FADE_FRAMES );

                tcBackButton->setEnabled( true );
                tcBackButton->fade( touchcontrols::FADE_IN, DEFAULT_FADE_FRAMES );
                break;
           case TS_YES_NO:
                tcYesNo->setEnabled( true );
                tcYesNo->fade( touchcontrols::FADE_IN, DEFAULT_FADE_FRAMES );
                break;
            case TS_GAME:
                tcGameMain->setEnabled( true );
                tcGameMain->fade( touchcontrols::FADE_IN, DEFAULT_FADE_FRAMES );

                tcBackButton->setEnabled( true );
                tcBackButton->fade( touchcontrols::FADE_IN, DEFAULT_FADE_FRAMES );

                tcInventory->setEnabled( true );

                tcWeaponWheel->setEnabled( true );
                break;
            case TS_MAP:
                tcAutomap->setEnabled( true );
                tcAutomap->fade( touchcontrols::FADE_IN, DEFAULT_FADE_FRAMES );
                break;
            case TS_POPUP:
                tcPopupBg->setEnabled( true );
                break;
            }

            currentScreenMode = mode;
        }
    }

    int inMenuLast = 1;
    int inAutomapLast = 0;
    void frameControls()
    {
        static bool glInit = false;
        if(!glInit)
        {
           controlsContainer.initGL();
           glInit = true;
        }

        updateTouchScreenMode( PortableGetScreenMode() );

        setHideSticks( !showSticks );
        controlsContainer.draw();

        //swapBuffers();

        //glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        //glClear(GL_COLOR_BUFFER_BIT);
    }


    void setTouchSettings( float alpha, float strafe, float fwd, float pitch, float yaw, int other )
    {

        gameControlsAlpha = alpha;
        if( tcGameMain )
        {
            tcGameMain->setAlpha( gameControlsAlpha );
        }

        turnMouseMode   = other & 0x2 ? true : false;
        invertLook      = other & 0x4 ? true : false;
        precisionShoot  = other & 0x8 ? true : false;
        showSticks      = other & 0x1000 ? true : false;
        enableWeaponWheel  = other & 0x2000 ? true : false;

        if( tcWeaponWheel )
        {
            tcWeaponWheel->setEnabled( enableWeaponWheel );
        }


        hideTouchControls = other & 0x80000000 ? true : false;


        switch( ( other >> 4 ) & 0xF )
        {
        case 1:
            left_double_action = PORT_ACT_ATTACK;
            break;
        case 2:
            left_double_action = PORT_ACT_JUMP;
            break;
        default:
            left_double_action = 0;
        }

        switch( ( other >> 8 ) & 0xF )
        {
        case 1:
            right_double_action = PORT_ACT_ATTACK;
            break;
        case 2:
            right_double_action = PORT_ACT_JUMP;
            break;
        default:
            right_double_action = 0;
        }

        strafe_sens = strafe;
        forward_sens = fwd;
        pitch_sens = pitch;
        yaw_sens = yaw;

    }

    int quit_now = 0;

#define EXPORT_ME __attribute__ ((visibility("default")))

    JNIEnv* env_;

    int argc = 1;
    const char * argv[32];
    std::string graphicpath;


    std::string game_path;

    const char * getGamePath()
    {
        return game_path.c_str();
    }

    std::string home_env;


    extern void Android_SetGameResolution( int width, int height );

    jint EXPORT_ME
    JAVA_FUNC( init )( JNIEnv* env,  jobject thiz, jstring graphics_dir, jint mem_mb, jobjectArray argsArray, jint lowRes, jstring game_path_ )
    {
#ifdef ANTI_HACK
        getGlobalClasses( env );
#endif

        env_ = env;

        //Android_SetGameResolution( 320, 240 );

        argv[0] = "Strife";
        int argCount = ( env )->GetArrayLength( argsArray );
        LOGI( "argCount = %d", argCount );
        for( int i = 0; i < argCount; i++ )
        {
            jstring string = ( jstring )( env )->GetObjectArrayElement( argsArray, i );
            argv[argc] = ( char * )( env )->GetStringUTFChars( string, 0 );
            LOGI( "arg = %s", argv[argc] );
            argc++;
        }


        game_path = ( char * )( env )->GetStringUTFChars( game_path_, 0 );

        LOGI( "game_path = %s", getGamePath() );

        //Needed for ecwolf to run
        //home_env = "HOME=/" + game_path;
        //putenv(home_env.c_str());
        setenv( "HOME", getGamePath(), 1 );

        chdir( getGamePath() );


        const char * p = env->GetStringUTFChars( graphics_dir, NULL );
        graphicpath =  std::string( p );


        initControls( android_screen_width, -android_screen_height, graphicpath.c_str() );

        SDL_SetSwapBufferCallBack( frameControls );

        //Now done in java to keep context etc
        //SDL_SwapBufferPerformsSwap( false );

        PortableInit( argc, argv ); //Never returns!!

        return 0;
    }


    jint EXPORT_ME
    JAVA_FUNC( frame )( JNIEnv* env, jobject thiz )
    {
    }

    __attribute__( ( visibility( "default" ) ) ) jint JNI_OnLoad( JavaVM* vm, void* reserved )
    {
        LOGI( "JNI_OnLoad" );

        setTCJNIEnv( vm );

        return JNI_VERSION_1_4;
    }


    void EXPORT_ME
    JAVA_FUNC( keypress )( JNIEnv *env, jobject obj, jint down, jint keycode, jint unicode )
    {
        LOGI( "keypress %d", keycode );
        if( controlsContainer.isEditing() )
        {
            if( down && ( keycode == SDL_SCANCODE_ESCAPE ) )
            {
                controlsContainer.finishEditing();
            }
            return;
        }
        PortableKeyEvent( down, keycode, unicode );
    }


    void EXPORT_ME
    JAVA_FUNC( touchEvent )( JNIEnv *env, jobject obj, jint action, jint pid, jfloat x, jfloat y )
    {
        //LOGI("TOUCHED");
        controlsContainer.processPointer( action, pid, x, y );
    }


    void EXPORT_ME
    JAVA_FUNC( doAction )( JNIEnv *env, jobject obj,  jint state, jint action )
    {
        LOGI( "doAction %d %d", state, action );
        if( hideTouchControls )
            if( tcGameMain )
            {
                if( tcGameMain->isEnabled() )
                {
                    tcGameMain->animateOut( 30 );
                }

                tcWeaponWheel->animateOut( 1 );
            }
        PortableAction( state, action );
    }

    void EXPORT_ME
    JAVA_FUNC( analogFwd )( JNIEnv *env, jobject obj, jfloat v )
    {
        PortableMoveFwd( v );
    }

    void EXPORT_ME
    JAVA_FUNC( analogSide )( JNIEnv *env, jobject obj, jfloat v )
    {
        PortableMoveSide( v );
    }

    void EXPORT_ME
    JAVA_FUNC( analogPitch )( JNIEnv *env, jobject obj, jint mode, jfloat v )
    {
        PortableLookPitch( mode, v );
    }

    void EXPORT_ME
    JAVA_FUNC( analogYaw )( JNIEnv *env, jobject obj, jint mode, jfloat v )
    {
        PortableLookYaw( mode, v );
    }

    void EXPORT_ME
    JAVA_FUNC( setTouchSettings )( JNIEnv *env, jobject obj,  jfloat alpha, jfloat strafe, jfloat fwd, jfloat pitch, jfloat yaw, int other )
    {
        setTouchSettings( alpha, strafe, fwd, pitch, yaw, other );
    }

    std::string quickCommandString;
    jint EXPORT_ME
    JAVA_FUNC( quickCommand )( JNIEnv *env, jobject obj,  jstring command )
    {

        return 0;
    }




    void EXPORT_ME
    JAVA_FUNC( setScreenSize )( JNIEnv* env, jobject thiz, jint width, jint height )
    {
        android_screen_width = width;
        android_screen_height = height;
    }


}
