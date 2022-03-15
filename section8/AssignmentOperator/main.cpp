#include <iostream>

int main()
{
    int num1 {10};
    int num2 {20};
    
    num1 = num2 = 1000;
    
    std::cout << "num1 is " << num1 << std::endl;
    std::cout << "num2 is " << num2 << std::endl;
    
    return 0;
}
