#include "script_component.hpp"

params [["_length",10],["_scheme",[]]];


private _letters = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"];
private _numbers = ["1","2","3","4","5","6","7","8","9","0"];

private _serial = "";

for [{private _i=0},{_i<_length},{_i=_i+1}] do {
    _charType = _scheme param [_i,false];

    switch (true) do {
        case (_charType isEqualType ""): {
            _serial = _serial + _charType;
        };
        case (_charType isEqualType false): {
            _serial = _serial + (selectRandom ([_letters,_numbers] select _charType));
        };
        case (_charType isEqualType []): {
            _serial = _serial + (selectRandom _charType);
        };
        default {
            _serial = _serial + " ";
        };
    };
};

_serial = toUpper _serial;

_serial
