#pragma once

#include <MiX_ConsoleUtils_Enums.hpp>

#include <iostream>
#include <string>
#include <vector>

namespace MiX_ConsoleUtils
{
    std::string ColorToShellCode(COLOR color);
    void Print(std::vector<std::string> phrase, COLOR color /*= COLOR::RESET*/);
}