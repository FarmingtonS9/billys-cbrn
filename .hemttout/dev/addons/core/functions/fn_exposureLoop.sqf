params ["_unit"];

_unit setVariable ["b_cbrn_exposure", 0, true];

while {alive _unit} do {
    private _exp = _unit getVariable ["b_cbrn_exposure", 0];
    _exp = _exp + 1;

    _unit setVariable ["b_cbrn_exposure", _exp, true];

    if (_unit == player) then {
        systemChat format ["Exposure: %1", _exp];
    };

    sleep 5;
};