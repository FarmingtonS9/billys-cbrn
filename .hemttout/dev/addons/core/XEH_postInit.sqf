[] spawn {
    waitUntil {!isNull player};

    player setVariable ["ba3cbrn_exposure", 0, true];

    hint "CBRN Core Loaded";

    [player] spawn ba3cbrn_fnc_exposureLoop;
}