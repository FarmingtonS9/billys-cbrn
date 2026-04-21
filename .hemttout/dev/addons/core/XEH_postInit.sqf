[] spawn {
    waitUntil {!isNull player};

    player setVariable ["b_cbrn_exposure", 0, true];

    hint "CBRN Core Loaded";

    [player] spawn fn_exposureLoop;
};