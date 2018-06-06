#include "script_component.hpp"
#include "..\dialog\defines.hpp"

params [["_target",objNull],["_passportOwner",objNull],["_state",-1]];

// user is currently remote controlling AI
if (ACE_player != player) exitWith {};

if (_state < 0) exitWith {ERROR("State -1")};

private _display = findDisplay GRAD_IDD_DISPLAYSHOWPASSPORT;
if (isNull _display) exitWith {};

private _stateText = switch (_state) do {
    case (0): {"%1 is looking at your passport."};
    case (1): {"%1 is no longer looking at your passport."};
    case (2): {"%1 is busy right now and can't look at your passport."};
};

private _infoText = _display displayCtrl GRAD_IDC_SHOWPASSPORT_INFOTEXT;
_infoText ctrlSetText format [_stateText,name _target];

playSound "hint";

if (_state > 0) then {

    _stopButton = _display displayCtrl GRAD_IDC_SHOWPASSPORT_STOPBUTTON;
    _stopButton ctrlEnable false;

    [{
        if (isNull _this) exitWith {};
        _this closeDisplay 1;
    },_display,3] call CBA_fnc_waitAndExecute;
};
