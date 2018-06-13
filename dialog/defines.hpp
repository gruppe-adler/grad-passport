#include "ui_toolkit.hpp"

// IDDs, IDCs ==================================================================

#define GRAD_IDD_DISPLAYSHOWPASSPORT                    41000
#define GRAD_IDC_SHOWPASSPORT_INFOTEXT                  41001
#define GRAD_IDC_SHOWPASSPORT_STOPBUTTON                41002
#define GRAD_IDC_SHOWPASSPORT_TITLE                     41003

#define GRAD_IDD_VIEWPASSPORT                           42000
#define GRAD_IDC_FIRSTNAME                              42001
#define GRAD_IDC_LASTNAME                               42002
#define GRAD_IDC_DATEOFBIRTH                            42003
#define GRAD_IDC_PLACEOFBIRTH                           42004
#define GRAD_IDC_SERIAL                                 42005
#define GRAD_IDC_EXPIRES                                42006

#define GRAD_IDC_HEIGHT                                 42007
#define GRAD_IDC_EYECOLOR                               42008
#define GRAD_IDC_ADDRESS                                42009
#define GRAD_IDC_NATIONALITY                            42010
#define GRAD_IDC_MISC1                                  42011
#define GRAD_IDC_MISC2                                  42012


// DIMENSIONS, POSITIONS SHOWPASSPORT DISPLAY ==================================
// editable
#define GRAD_TOPBAR_H                           (0.0250 * Y_SCALE)
#define GRAD_SPACER_Y                           (0.0025 * SZ_SCALE)
#define GRAD_PADDING_X                          (0.0150 * X_SCALE)
#define GRAD_PADDING_Y                          (0.0150 * Y_SCALE)

#define GRAD_SHOWPASSPORT_CONTENT_W             (0.4500 * X_SCALE)

#define GRAD_SHOWPASSPORT_INFOTEXT_H            (0.0500 * Y_SCALE)
#define GRAD_SHOWPASSPORT_BUTTON_H              (0.0500 * Y_SCALE)

// parametric
#define GRAD_SHOWPASSPORT_BACKGROUND_H          (GRAD_SHOWPASSPORT_INFOTEXT_H + GRAD_SHOWPASSPORT_BUTTON_H + 2 * GRAD_PADDING_Y)

#define GRAD_SHOWPASSPORT_TOTAL_H               (GRAD_TOPBAR_H + GRAD_SPACER_Y + GRAD_SHOWPASSPORT_BACKGROUND_H)
#define GRAD_SHOWPASSPORT_TOTAL_W               (GRAD_SHOWPASSPORT_CONTENT_W + 2 * GRAD_PADDING_X)
#define GRAD_SHOWPASSPORT_TOTAL_X               CENTER(1,GRAD_SHOWPASSPORT_TOTAL_W)
#define GRAD_SHOWPASSPORT_TOTAL_Y               CENTER(1,GRAD_SHOWPASSPORT_TOTAL_H)

#define GRAD_SHOWPASSPORT_BACKGROUND_Y          (GRAD_SHOWPASSPORT_TOTAL_Y + GRAD_TOPBAR_H + GRAD_SPACER_Y)

#define GRAD_SHOWPASSPORT_INFOTEXT_X            (GRAD_SHOWPASSPORT_TOTAL_X + GRAD_PADDING_X)
#define GRAD_SHOWPASSPORT_BUTTON_X              (GRAD_SHOWPASSPORT_TOTAL_X + GRAD_PADDING_X)

#define GRAD_SHOWPASSPORT_INFOTEXT_Y            (GRAD_SHOWPASSPORT_BACKGROUND_Y + GRAD_PADDING_Y)
#define GRAD_SHOWPASSPORT_BUTTON_Y              (GRAD_SHOWPASSPORT_INFOTEXT_Y + GRAD_SHOWPASSPORT_INFOTEXT_H)



// DIMENSIONS, POSITIONS DEFAULT PASSPORT DISPLAY ==============================
// editable
#define GRAD_PASSPORT_DEFAULT_W                 (0.4000 * X_SCALE)
#define GRAD_PASSPORT_DEFAULT_H                 (0.2000 * Y_SCALE)
#define GRAD_PASSPORT_LINE_H                    (0.0500 * Y_SCALE)
#define GRAD_PASSPORT_LINESPACE_Y               (0.0350 * Y_SCALE)
#define GRAD_PASSPORT_PADDING_X                 (0.0650 * X_SCALE)
#define GRAD_PASSPORT_PADDING_Y                 (0.0180 * Y_SCALE)
#define GRAD_PASSPORT_DEFAULT_INDENT_X          (0.0100 * X_SCALE)

#define GRAD_PASSPORT_DEFAULT_TITLETEXTSIZE     (0.02 * TEXT_SCALE)

#define GRAD_PASSPORT_DEFAULT_X                 CENTER(1,GRAD_PASSPORT_DEFAULT_W)
#define GRAD_PASSPORT_DEFAULT_Y                 CENTER(1,GRAD_PASSPORT_DEFAULT_H)

//parametric
#define GRAD_PASSPORT_DEFAULT_LEFTCOLUMN_X      (GRAD_PASSPORT_DEFAULT_X + GRAD_PASSPORT_PADDING_X)
#define GRAD_PASSPORT_DEFAULT_RIGHTCOLUMN_X     (GRAD_PASSPORT_DEFAULT_X + GRAD_PASSPORT_DEFAULT_W - 0.1700 * X_SCALE)
#define GRAD_PASSPORT_CONTENT_W                 (GRAD_PASSPORT_DEFAULT_W - GRAD_PASSPORT_PADDING_X)

#define GRAD_PASSPORT_DEFAULT_LINE_Y(var)       (GRAD_PASSPORT_DEFAULT_Y + GRAD_PASSPORT_PADDING_Y + 0.0150 * Y_SCALE + var * GRAD_PASSPORT_LINESPACE_Y)
#define GRAD_PASSPORT_DEFAULT_LINETITLE_Y(var)  (GRAD_PASSPORT_DEFAULT_Y + GRAD_PASSPORT_PADDING_Y + var * GRAD_PASSPORT_LINESPACE_Y)
