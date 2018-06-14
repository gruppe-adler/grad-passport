#include "script_component.hpp"
#include "..\dialog\defines.hpp"

params [["_target",objNull],["_passportOwner",objNull]];


private _display = (findDisplay 46) createDisplay QGVAR(displayShowPassport);
_display setVariable [QGVAR(displayTarget),_target];

[ACE_player,"gestureFreeze"] call ace_common_fnc_doGesture;

[_target,_passportOwner,true] remoteExec [QFUNC(receiveShowPassport),_target,false];

// handle death, unconsciousness, distance
[{
    params ["_args","_handle"];
    _args params ["_display","_target","_passportOwner"];

    if (isNull _display) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    if (!alive _passportOwner || _passportOwner getVariable ["ACE_isUnconscious",false] || (_target distance2D _passportOwner) > 5) exitWith {
        _display closeDisplay 2;
        [_handle] call CBA_fnc_removePerFrameHandler;
    };
},0.2,[_display,_target,_passportOwner]] call CBA_fnc_addPerFrameHandler;
