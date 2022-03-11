#include <iostream>

int main()
{
    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    int numberOfRooms {0};
    
    std::cout << "Hello, welcome to Frank's Carpet Cleaning Service"
              << std::endl;
    std::cout << "\nHow many rooms would you like cleaned? ";
    std::cin >> numberOfRooms;
    
    std::cout << "\nEstimate for carpet cleaning service" << std::endl
              << "Number of rooms: " << numberOfRooms << std::endl
              << "Price per room: $" << price_per_room << std::endl
              << "Cost: $" << price_per_room * numberOfRooms << std::endl
              << "Tax: $" << price_per_room * numberOfRooms * sales_tax << std::endl
              << "===================================================\n"
              << "Total estimate: $"
              << (price_per_room * numberOfRooms) + (price_per_room * numberOfRooms * sales_tax)
              << std::endl
              << "This estimate is valid for " << estimate_expiry
              << " days" << std::endl;
    
    return 0;
}
