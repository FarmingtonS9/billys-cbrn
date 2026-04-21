class CfgPatches {
    class b_cbrn_core {
        name = "Billys CBRN";
        author = "Billy Stevens";
        requiredAddons[] = {"cba_main",};
        requiredVersion = 2.14;
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
        init = "call compile preprocessFileLineNumbers '\z\b_cbrn\addons\core\XEH_postInit.sqf'";
    };
};
