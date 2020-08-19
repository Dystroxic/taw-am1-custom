class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class DOUBLES(PREFIX,attributes) {
                class Attributes {
                    class GVAR(crateFillerSpawn) {
                        displayName = "Crate Filler Spawn";
                        tooltip = "The variable name of the object that should act as the spawn point for Crate Filler crates.";
                        property = QGVAR(crateFillerSpawn);
                        control = "EditCode";
                        defaultValue = "''";
                        validate = "variable";
                        expression = QUOTE(if !(_value isEqualTo '') then {_this setVariable [ARR_3('%s',_value,true)];};);
                        condition = "(1 - objectBrain)";
                        typeName = "STRING";
                    };
                    class GVAR(crateFillerSpawn) {
                        displayName = "Crate Filler Spawn";
                        tooltip = "The variable name of the object that should act as the spawn point for Crate Filler crates.";
                        property = QGVAR(crateFillerSpawn);
                        control = "EditCode";
                        defaultValue = "''";
                        validate = "variable";
                        expression = QUOTE(if !(_value isEqualTo '') then {_this setVariable [ARR_3('%s',_value,true)];};);
                        condition = "(1 - objectBrain)";
                        typeName = "STRING";
                    };
                };
            };
        };
    };
};