#include "pch.h"
#include "vcpkg_Enums.h"
#include "vcpkg_Checks.h"

namespace vcpkg::Enums
{
    std::string nullvalue_toString(const std::string& enum_name)
    {
        return Strings::format("%s_NULLVALUE", enum_name);
    }

    void nullvalue_used(const std::string& enum_name)
    {
        Checks::exit_with_message("NULLVALUE of enum %s was used", enum_name);
    }

    void unreachable(const std::string& enum_name)
    {
        Checks::exit_with_message("Unreachable code for enum, %s", enum_name);
    }
}
