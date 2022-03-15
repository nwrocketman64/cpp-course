#include <iostream>

int main()
{
    const double usdPerEur {1.19};
    
    double euros {0.0};
    double dollars {0.0};
    
    std::cout << "Welcome to EUR to USD converter" << std::endl;
    
    std::cout << "Enter the value in EUR: ";
    std::cin >> euros;
    
    dollars = euros * usdPerEur;
    
    std::cout << euros << " euros is equivalent to $" << dollars
              << std::endl;
    
    return 0;
}
