#include "script_component.hpp"

params [["_display",displayNull],["_exitCode",2]];

private _passportOwner = _display getVariable [QGVAR(passportOwner),objNull];
if (isNull _passportOwner) exitWith {ERROR("Owner is null.")};

if (_exitCode > 1) then {
    [ACE_player,_passportOwner,1] remoteExec [QFUNC(updateShowPassportDialog),_passportOwner,false];
};

false
