# GRAD Passport
Adds ID cards / passports to the game that can be checked/shown with ACE Interaction. Customizable by mission maker. Different styles per unit.

**Default Passport**  
![Default Passport Picture](https://i.imgur.com/ofC6nH8.png)

## Dependencies
* [CBA_A3](https://github.com/CBATeam/CBA_A3)
* [ACE3](https://github.com/acemod/ACE3)

## Installation

Append the following lines of code to the `description.ext`:

```sqf
#include "node_modules\grad-passport\grad_passport.hpp"

class CfgFunctions {
    #include "node_modules\grad-passport\cfgFunctions.hpp"
};
```

If you want to use a different path instead of `node_modules`, prepend your mission's `description.ext` with

```
#define MODULES_DIRECTORY <YOUR PATH>
```

### Manually
1. Create a folder in your mission root folder and name it `node_modules`. Inside that folder, create another folder and name it `grad-passport`.
2. Download the [latest version](https://github.com/gruppe-adler/grad-passport/releases) of this module, then put it into the folder you just created.

### Via `npm`
_for details about what npm is and how to use it, look it up on [npmjs.com](https://www.npmjs.com/)_

1. Install package `grad-passport` : `npm install --save grad-passport`

## Usage
To show your passport to someone, ACE-interact with a unit and select *Show ID Card*. A dialog will appear that will tell you if that unit is currently looking at your passport and allow you to stop showing it, if you decide they have seen enough.

To check the passport of a unit that does not want to voluntarily show it, ACE-interact with them and select *Check ID Card*. This only works if they are unconscious, handcuffed or surrendering.

To check your own passport, ACE-self-interact and go to *Equipment >> Check ID Card*.

## Implementation

### Personal Details (Variables)
By default, every unit is assigned a random date of birth, place of birth (taken from all cities on the map), date of expiry, serial, and height. You can overwrite these if you like. All of these variables are saved in the unit and have the prefix `grad_passport_`. Data type of all variables has to be *STRING*.

So for example if I wanted to set the date of birth for a unit, I would use:

```sqf
_unit setVariable ["grad_passport_dateOfBirth","12.07.1984"];
```

### Custom Passports
You can create your own passports just like you would create any dialog. You can also inherit from the default passport if you just want to make some small changes. For example, if I wanted to use a different background, I would do this:

```sqf
class myPassport: grad_passport_defaultPassport {
    class ControlsBackground: ControlsBackground {
        class BGPic: BGPic {
            text = "data\myBackground.paa";
        };
    };
};
```

If you are using the provided IDCs, your dialog elements will automatically be filled. You can use the defines [here](https://github.com/gruppe-adler/grad-passport/blob/master/dialog/defines.hpp). These have to be text (type=0) or structured text (type=13). Example:

```sqf
class myPassport {
    class Controls {
        class height: RscText {
            idc = GRAD_IDC_HEIGHT;
        };
    };
};
```

### Available Properties

These are used in the default passport:

Usage                                                                          | Variable     | IDC
-------------------------------------------------------------------------------|--------------|------
**These are used in the default passport:**                                    |              |
the dialog classname that this unit uses                                       | passportRsc  | -
first name (taken from unit's identity)                                        | -            | 42001
last name (taken from unit's identity)                                         | -            | 42001
date of birth                                                                  | dateOfBirth  | 42003
place of birth                                                                 | placeOfBirth | 42004
serial                                                                         | serial       | 42005
expiry date                                                                    | expires      | 42006
**These are unused in the default passport, but are still randomly assigned:** |              |
height                                                                         | height       | 42007
eye color                                                                      | eyeColor     | 42008
**These have to be assigned manually:**                                        |              |
address                                                                        | address      | 42009
nationality                                                                    | nationality  | 42010
use for anything                                                               | misc1        | 42011
use for anything                                                               | misc2        | 42012
