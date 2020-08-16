class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class DOUBLES(PREFIX,attributes) {
                class Attributes {
                    class GVAR(isCrateFiller) {
                        displayName = "Is Crate Filler";
                        tooltip = "Has the Crate Filler interaction enabled.";
                        property = QGVAR(isCrateFiller);
                        control = "Checkbox";
                        expression = QUOTE(if (_value) then {_this setVariable [ARR_3(QQGVAR(isCrateFiller),true,true)];};);
                        defaultValue = false;
                        condition = "(1 - objectBrain)";
                        typeName = "BOOL";
                    };
                    class GVAR(crateFillerSpawn) {
                        displayName = "Crate Filler Spawn";
                        tooltip = "The variable name of the object that should act as the spawn point for Crate Filler crates.";
                        property = QGVAR(crateFillerSpawn);
                        control = "EditShort";
                        expression = QUOTE(if !(_value isEqualTo '') then {_this setVariable [ARR_3(QQGVAR(crateFillerSpawn),_value,true)];};);
                        defaultValue = "";
                        condition = "(1 - objectBrain)";
                        typeName = "STRING";
                    };
                };
            };
        };
    };
};