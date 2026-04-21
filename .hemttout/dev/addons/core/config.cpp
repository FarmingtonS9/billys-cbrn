class CfgPatches {
    class b_cbrn_core {
        name = "Billys CBRN";
        author = "Billy Stevens";
        requiredAddons[] = {"cba_main", "ace_main"};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions {
    class b_cbrn {
        class core {
            file = "\z\b_cbrn\addons\core\functions";
        };
    };
};

class Extended_PostInit_EventHandlers {
    class b_cbrn_core {
        init = "hint 'CBRN Core Loaded';";
    };
};
