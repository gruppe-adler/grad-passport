#ifndef MODULES_DIRECTORY
    #define MODULES_DIRECTORY node_modules
#endif

#include "dialog_macros.hpp"

#include "baseDefines.hpp"
#include "defines.hpp"

#include "ui_toolkit.hpp"
#include "baseRsc.hpp"


class GVAR(displayShowPassport) {
    idd = GRAD_IDD_DISPLAYSHOWPASSPORT;
    movingEnable = true;
    enableSimulation = true;
    onUnload = QUOTE(_this call FUNC(onShowDialogClose));

    class ControlsBackground {
        class TopBar: GVAR(RscText) {
            moving = true;

            x = GRAD_SHOWPASSPORT_TOTAL_X;
            y = GRAD_SHOWPASSPORT_TOTAL_Y;
            w = GRAD_SHOWPASSPORT_TOTAL_W;
            h = GRAD_TOPBAR_H;

            font = "EtelkaMonospacePro";
            text = "SHOWING PASSPORT";

            colorBackground[] = {
                "(profilenamespace getvariable ['GUI_BCG_RGB_R', 0])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_G',0])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
                1
            };
        };

        class MainBackground: GVAR(RscBackground) {
            x = GRAD_SHOWPASSPORT_TOTAL_X;
            y = GRAD_SHOWPASSPORT_BACKGROUND_Y;
            w = GRAD_SHOWPASSPORT_TOTAL_W;
            h = GRAD_SHOWPASSPORT_BACKGROUND_H;
        };
    };

    class Controls {
        class InfoText: GVAR(RscText) {
            idc = GRAD_IDC_SHOWPASSPORT_INFOTEXT;

            x = GRAD_SHOWPASSPORT_INFOTEXT_X;
            y = GRAD_SHOWPASSPORT_INFOTEXT_Y;
            w = GRAD_SHOWPASSPORT_CONTENT_W;
            h = GRAD_SHOWPASSPORT_INFOTEXT_H;
        };

        class StopButton: GVAR(RscButton) {
            idc = GRAD_IDC_SHOWPASSPORT_STOPBUTTON;

            x = GRAD_SHOWPASSPORT_BUTTON_X;
            y = GRAD_SHOWPASSPORT_BUTTON_Y;
            w = GRAD_SHOWPASSPORT_CONTENT_W;
            h = GRAD_SHOWPASSPORT_BUTTON_H;

            text = "Stop Showing";
            onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";

            colorFocused[] = {0,0,0,0.8};
        };
    };
};


class GVAR(defaultPassport) {
    idd = GRAD_IDD_VIEWPASSPORT;
    movingEnable = true;
    enableSimulation = true;
    onUnload = QUOTE(_this call FUNC(onViewDialogClose));

    class ControlsBackground {
        class BGPic: GVAR(RscPicture) {
            x = GRAD_PASSPORT_DEFAULT_X;
            y = GRAD_PASSPORT_DEFAULT_Y;
            w = GRAD_PASSPORT_DEFAULT_W;
            h = GRAD_PASSPORT_DEFAULT_H;

            text = QUOTE(MODULES_DIRECTORY\grad-passport\data\background_default.paa);
        };
    };

    class Controls {
        class LastNameTitle: GVAR(RscText) {
            x = GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X;
            y = GRAD_PASSPORT_DEFAULT_LINETITLE_Y(0);
            w = (0.1000 * X_SCALE);
            h = GRAD_PASSPORT_LINE_H;

            text = "Surname";
            sizeEx = GRAD_PASSPORT_DEFAULT_TITLETEXTSIZE;

            colorText[] = {0,0,0,1};
        };
        class LastName: GVAR(RscText) {
            idc = GRAD_IDC_LASTNAME;

            x = GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X + GRAD_PASSPORT_DEFAULT_INDENT_X;
            y = GRAD_PASSPORT_DEFAULT_LINE_Y(0);
            w = GRAD_PASSPORT_CONTENT_W;
            h = GRAD_PASSPORT_LINE_H;

            colorText[] = {0,0,0,1};
        };
        class FirstNameTitle: GVAR(RscText) {
            x = GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X;
            y = GRAD_PASSPORT_DEFAULT_LINETITLE_Y(1);
            w = (0.1000 * X_SCALE);
            h = GRAD_PASSPORT_LINE_H;

            text = "Given names";
            sizeEx = GRAD_PASSPORT_DEFAULT_TITLETEXTSIZE;

            colorText[] = {0,0,0,1};
        };
        class FirstName: GVAR(RscText) {
            idc = GRAD_IDC_FIRSTNAME;

            x = GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X + GRAD_PASSPORT_DEFAULT_INDENT_X;
            y = GRAD_PASSPORT_DEFAULT_LINE_Y(1);
            w = GRAD_PASSPORT_CONTENT_W;
            h = GRAD_PASSPORT_LINE_H;

            colorText[] = {0,0,0,1};
        };
        class DateOfBirthTitle: GVAR(RscText) {
            x = GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X;
            y = GRAD_PASSPORT_DEFAULT_LINETITLE_Y(2);
            w = (0.1000 * X_SCALE);
            h = GRAD_PASSPORT_LINE_H;

            text = "Date of birth";
            sizeEx = GRAD_PASSPORT_DEFAULT_TITLETEXTSIZE;

            colorText[] = {0,0,0,1};
        };
        class DateOfBirth: GVAR(RscText) {
            idc = GRAD_IDC_DATEOFBIRTH;

            x = GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X + GRAD_PASSPORT_DEFAULT_INDENT_X;
            y = GRAD_PASSPORT_DEFAULT_LINE_Y(2);
            w = GRAD_PASSPORT_CONTENT_W;
            h = GRAD_PASSPORT_LINE_H;

            colorText[] = {0,0,0,1};
        };
        class PlaceOfBirthTitle: GVAR(RscText) {
            x = GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X;
            y = GRAD_PASSPORT_DEFAULT_LINETITLE_Y(3);
            w = (0.1000 * X_SCALE);
            h = GRAD_PASSPORT_LINE_H;

            text = "Place of birth";
            sizeEx = GRAD_PASSPORT_DEFAULT_TITLETEXTSIZE;

            colorText[] = {0,0,0,1};
        };
        class PlaceOfBirth: GVAR(RscText) {
            idc = GRAD_IDC_PLACEOFBIRTH;

            x = GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X + GRAD_PASSPORT_DEFAULT_INDENT_X;
            y = GRAD_PASSPORT_DEFAULT_LINE_Y(3);
            w = GRAD_PASSPORT_CONTENT_W;
            h = GRAD_PASSPORT_LINE_H;

            colorText[] = {0,0,0,1};
        };
        class ExpiresTitle: GVAR(RscText) {
            x = GRAD_PASSPORT_DEFAULT_RIGHTCOLUMN_X;
            y = GRAD_PASSPORT_DEFAULT_LINETITLE_Y(2);
            w = (0.1000 * X_SCALE);
            h = GRAD_PASSPORT_LINE_H;

            text = "Date of expiry";
            sizeEx = GRAD_PASSPORT_DEFAULT_TITLETEXTSIZE;

            colorText[] = {0,0,0,1};
        };
        class Expires: GVAR(RscText) {
            idc = GRAD_IDC_EXPIRES;

            x = GRAD_PASSPORT_DEFAULT_RIGHTCOLUMN_X + GRAD_PASSPORT_DEFAULT_INDENT_X;
            y = GRAD_PASSPORT_DEFAULT_LINE_Y(2);
            w = GRAD_PASSPORT_CONTENT_W;
            h = GRAD_PASSPORT_LINE_H;

            colorText[] = {0,0,0,1};
        };
        class Serial: GVAR(RscText) {
            idc = GRAD_IDC_SERIAL;

            x = GRAD_PASSPORT_DEFAULT_RIGHTCOLUMN_X;
            y = GRAD_PASSPORT_DEFAULT_LINE_Y(3);
            w = GRAD_PASSPORT_CONTENT_W;
            h = GRAD_PASSPORT_LINE_H;

            font = "EtelkaMonospacePro";
            sizeEx = 0.03 * TEXT_SCALE;
            colorText[] = {0,0,0,1};
        };
    };
};
