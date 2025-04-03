#include "MiX_ConsoleUtils.hpp"

namespace MiX_ConsoleUtils
{
    std::string ColorToShellCode(COLOR color)
    {
        std::string shellCode;
        switch (color)
        {
        case COLOR::BLACK:
            shellCode = "\033[30m";
            break;
        case COLOR::RED:
            shellCode = "\033[31m";
            break;
        case COLOR::GREEN:
            shellCode = "\033[32m";
            break;
        case COLOR::YELLOW:
            shellCode = "\033[33m";
            break;
        case COLOR::BLUE:
            shellCode = "\033[34m";
            break;
        case COLOR::MAGENTA:
            shellCode = "\033[35m";
            break;
        case COLOR::CYAN:
            shellCode = "\033[36m";
            break;
        case COLOR::WHITE:
            shellCode = "\033[37m";
            break;
        default:
            shellCode = "\033[0m";
            break;
        }
        return shellCode;
    }

    // int main()
    // {
    //     std::vector<std::string> literal{"Hello", "world!"};
    //     base_namespace::Print(literal, COLOR::MAGENTA);
    //     base_namespace::Print(literal);
    //     std::string a;
    //     std::cin >> a;
    //     return -1;
    // }

    void Print(std::vector<std::string> phrase, COLOR color = COLOR::RESET)
    {
        std::cout << ColorToShellCode(color);
        for (const std::string &word : phrase)
        {
            std::cout << word << " ";
        }
        std::cout << ColorToShellCode(COLOR::RESET) << "\n";
    }
}