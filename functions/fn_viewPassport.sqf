#include "script_component.hpp"
#include "..\dialog\defines.hpp"
#include "..\dialog\baseDefines.hpp"

params [["_target",objNull],["_passportOwner",objNull],["_showing",true]];

if !(_showing) exitWith {
    (findDisplay GRAD_IDD_VIEWPASSPORT) closeDisplay 1;
};

private _passportConfig = (missionConfigFile >> (_passportOwner getVariable [QGVAR(passportRsc),QGVAR(defaultPassport)]));
private _display = (findDisplay 46) createDisplay (configName _passportConfig);

([_passportOwner] call FUNC(getPassportData)) params ["_firstName","_lastName","_dateOfBirth","_placeOfBirth","_address","_expires","_serial","_height"];
private _ctrlFirstName = _display displayCtrl GRAD_IDC_FIRSTNAME;
private _ctrlLastName = _display displayCtrl GRAD_IDC_LASTNAME;
private _ctrlDateOfBirth = _display displayCtrl GRAD_IDC_DATEOFBIRTH;
private _ctrlPlaceOfBirth = _display displayCtrl GRAD_IDC_PLACEOFBIRTH;
private _ctrlSerial = _display displayCtrl GRAD_IDC_SERIAL;
private _ctrlExpires = _display displayCtrl GRAD_IDC_EXPIRES;

private _ctrlAdress = _display displayCtrl GRAD_IDC_ADDRESS;
private _ctrlHeight = _display displayCtrl GRAD_IDC_HEIGHT;

{
    _x params ["_ctrl","_text"];
    if (!isNull _ctrl) then {
        if ((ctrlType _ctrl) == CT_STATIC) then {
            _ctrl ctrlSetText _text;
        } else {
            if ((ctrlType _ctrl) == CT_STRUCTURED_TEXT) then {
                _ctrl ctrlSetStructuredText parseText _text;
            };
        };
    };
} forEach [
    [_ctrlFirstName,_firstName],
    [_ctrlLastName,_lastName],
    [_ctrlDateOfBirth,_dateOfBirth],
    [_ctrlPlaceOfBirth,_placeOfBirth],
    [_ctrlSerial,_serial]
    [_ctrlExpires,_expires],
    [_ctrlAdress,_address],
    [_ctrlHeight,_height]
];
