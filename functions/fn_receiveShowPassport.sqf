#include "script_component.hpp"
#include "..\dialog\defines.hpp"

params [["_target",objNull],["_passportOwner",objNull],["_showing",true]];

// target is local, but not the currently controlled unit
if (_target != ACE_player) exitWith {[_target,_passportOwner,0] remoteExec [QFUNC(updateShowPassportDialog),remoteExecutedOwner,false]};

// already viewing other passport >> exit and send busy state
if (!isNull (findDisplay GRAD_IDD_DISPLAYSHOWPASSPORT)) exitWith {[_target,_passportOwner,2] remoteExec [QFUNC(updateShowPassportDialog),remoteExecutedOwner,false]};

[_target,_passportOwner,_showing] call FUNC(viewPassport);
