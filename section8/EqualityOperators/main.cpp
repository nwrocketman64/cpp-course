#include <iostream>

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1{}, num2{};
    
    std::cout << std::boolalpha;
    
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    std::cout << "Comparision result (equals): " << equal_result
              << std::endl;
    std::cout << "Comparision result (not equals): " << not_equal_result
              << std::endl;
    
    char char1{}, char2{};
    
    std::cout << "Enter two characters separated by a space: ";
    std::cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    std::cout << "Comparision result (equals): " << equal_result
              << std::endl;
    std::cout << "Comparision result (not equals): " << not_equal_result
              << std::endl;
    
    double double1 {}, double2 {};
    
    std::cout << "Enter two doubles separated by a space: ";
    std::cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    std::cout << "Comparision result (equals): " << equal_result
              << std::endl;
    std::cout << "Comparision result (not equals): " << not_equal_result
              << std::endl;
    
    return 0;
}
