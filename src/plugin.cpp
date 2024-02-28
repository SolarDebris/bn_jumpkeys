#include <binaryninjaapi.h>
#include "commands.h"

extern "C" {

    BN_DECLARE_CORE_ABI_VERSION

    BINARYNINJAPLUGIN bool CorePluginInit()
    {
	    BinaryNinja::LogInfo("Binary Ninja Jumpkeys loaded successfully");
        Commands::register_commands();
	    return true;
    }

/* */
}
