#include <iostream>

int main()
{
    int num1{}, num2{};
    
    std::cout << std::boolalpha;
    
    std::cout << "Enter 2 integers separated by a space: ";
    std::cin >> num1 >> num2;
    
    std::cout << num1 << " > " << num2 << ": " << (num1 > num2)
              << std::endl;
    std::cout << num1 << " >= " << num2 << ": " << (num1 >= num2)
              << std::endl;
    std::cout << num1 << " < " << num2 << ": " << (num1 < num2)
              << std::endl;
    std::cout << num1 << " <= " << num2 << ": " << (num1 <= num2)
              << std::endl;
    
    const int lower {10};
    const int upper {20};
    
    std::cout << "Enter an integer that is greater than " << lower
              << ": ";
    std::cin >> num1;
    std::cout << num1 << " > " << lower << " is " << (num1 > lower)
              << std::endl;
    std::cout << "Enter an integer that is less than or equall to "
              << lower << ": ";
    std::cin >> num1;
    std::cout << num1 << " <= " << upper << " is " << (num1 <= upper)
              << std::endl;
    
    return 0;
}
