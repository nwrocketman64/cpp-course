#include <iostream>

int main()
{
    int num1 {200};
    int num2 {100};
    
    std::cout << num1 << " + " << num2 << " = " << num1 + num2
              << std::endl;
    
    int result {0};
    
    result = num1 + num2;
    std::cout << num1 << " + " << num2 << " = " << result << std::endl;
    
    result = num1 - num2;
    std::cout << num1 << " - " << num2 << " = " << result << std::endl;
    
    result = num1 * num2;
    std::cout << num1 << " * " << num2 << " = " << result << std::endl;
    
    result = num1 / num2;
    std::cout << num1 << " / " << num2 << " = " << result << std::endl;
    
    result = num1 % num2;
    std::cout << num1 << " % " << num2 << " = " << result << std::endl;
    
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    std::cout << num1 << " % " << num2 << " = " << result << std::endl;
    
    result = num1 * 10 + num2;
    
    std::cout << 5 / 10 << std::endl;
    std::cout << 5.0 / 10.0 << std::endl;
    
    return 0;
}
