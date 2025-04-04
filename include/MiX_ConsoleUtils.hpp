
#pragma once

#include <MiX_ConsoleUtils_Enums.hpp>

#include <iostream>
#include <string>
#include <vector>

namespace MiX_ConsoleUtils
{
    /// @brief Convert ::COLOR to ESC code
    /// @param color ::COLOR to convert
    /// @return string like "\033[XXm"
    std::string ColorToShellCode(COLOR color);

    /// @brief Print you text to Console!
    /// @param phrase Any words
    /// @param color If you will paint text (optional)
    void Print(std::vector<std::string> phrase, COLOR color /*= COLOR::RESET*/);
}