class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class DOUBLES(PREFIX,attributes) {
                class Attributes {
                    class GVAR(speaksAllLanguages) {
                        displayName = "Speaks All Languages";
                        tooltip = "Can speak all Babel languages in the mission.";
                        property = QGVAR(speaksAllLanguages);
                        control = "Checkbox";
                        expression = QUOTE(if (_value) then {_this setVariable [ARR_2('%s',true)];};);
                        defaultValue = false;
                        condition = "objectControllable";
                        typeName = "BOOL";
                    };
                    class GVAR(spokenLanguages) {
                        displayName = "Babel Languages";
                        tooltip = "Languages spoken by this unit in array of keys format (e.g. [""en"", ""ru""]). Setting this will override the default languages for this unit's side.";
                        property = QGVAR(spokenLanguages);
                        control = "EditCode";
                        defaultValue = "''";
                        expression = QUOTE(if !(_value isEqualTo '') then {_this setVariable [ARR_2('%s',[_value] call EFUNC(common,parseArray))];};);
                        condition = "objectControllable";
                        typeName = "STRING";
                    };
                };
            };
        };
    };
};