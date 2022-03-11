#include <iostream>

int main()
{
    int favoriteNumber;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favoriteNumber;
    
    std::cout << favoriteNumber << " is my favorite number, too!"
              << std::endl;
    return 0;
}
