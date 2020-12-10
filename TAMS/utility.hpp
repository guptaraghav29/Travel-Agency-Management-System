#ifndef __UTILITY_HPP__
#define __UTILITY_HPP__

#include <iostream>
#include <limits>

inline int choice(int a, int b)
{
    int m_choice;
    bool valid = false;
    do
    {
        std::cout << "Enter choice (" << a << " - " << b << "): ";
        std::cin >> m_choice;
        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (m_choice >= a && m_choice <= b)
            valid = true;
    } while (!valid);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << '\n';
    return m_choice;
}

#endif
