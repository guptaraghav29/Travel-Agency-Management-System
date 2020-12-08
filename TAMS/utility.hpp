#include <iostream>

int choice(int, int)
{
    int choice;
    bool valid = false;
    do
    {
        std::cout << "Enter choice (" << a << " - " << b << "): ";
        std::cin >> choice;
        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (choice >= a && choice <= b)
            valid = true;
    } while (!valid);
    return choice;
}