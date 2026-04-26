class CfgPatches {
    class ba3cbrn_core {
        name = "Billys CBRN";
        author = "Billy Stevens";
        requiredAddons[] = {"cba_main",};
        requiredVersion = 2.14;
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions {
    class ba3cbrn {
        class core {
            file = "\z\ba3cbrn\addons\core\functions";

            class exposureLoop {};
        };
    };
};

class Extended_PostInit_EventHandlers {
    class ba3cbrn_core {
        init = "call compile preprocessFileLineNumbers '\z\ba3cbrn\addons\core\XEH_postInit.sqf'";
    };
};
