#include <iostream>

int main()
{
    int num {};
    const int lower{10};
    const int upper{20};
    
    std::cout << std::boolalpha;
    
    std::cout << "Enter an integer - the bounds are " << lower
              << " and " << upper << ": ";
    std::cin >> num;
    
    bool within_bounds {false};
    
    within_bounds = (num > lower && num < upper);
    std::cout << num << " is between " << lower << " and " << upper
              << ": " << within_bounds << std::endl;
    
    bool outside_bounds {false};
    outside_bounds = (num < lower || num > upper);
    std::cout << num << " is outside " << lower << " and " << upper
              << ": " << outside_bounds << std::endl;
              
    bool on_bounds {false};
    on_bounds = (num == lower || num == upper);
    std::cout << num << " is on the bounds " << lower << " and "
              << upper << ": " << on_bounds << std::endl;
    
    return 0;
}
