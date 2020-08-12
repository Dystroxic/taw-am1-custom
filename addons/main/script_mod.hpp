// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX x
#define PREFIX taw_am1_custom
#define REQUIRED_VERSION 1.98
#define URL https://github.com/Dystroxic/taw-am1-custom

#ifdef COMPONENT_BEAUTIFIED
	#define COMPONENT_NAME QUOTE(TAW AM1 Custom - COMPONENT_BEAUTIFIED)
#else
	#define COMPONENT_NAME QUOTE(TAW AM1 Custom - COMPONENT)
#endif