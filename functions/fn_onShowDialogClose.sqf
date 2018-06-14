#include "script_component.hpp"

params [["_display",displayNull],["_exitCode",2]];

private _target = _display getVariable [QGVAR(displayTarget),objNull];
if (isNull _target) exitWith {ERROR("Target is null.")};

if (_exitCode > 1) then {
    [_target,ACE_player,false] remoteExec [QFUNC(receiveShowPassport),_target,false];
};

false
