#include <iostream>
#include <vector>
#include <string>

int main()
{
    int num{10};
    std::cout << "Value of num is: " << num << std::endl;
    std::cout << "sizeof of num is: " << sizeof num << std::endl;
    std::cout << "Address of num is: " << &num << std::endl;

    int *p;
    std::cout << "\nValue of p is: " << p << std::endl;
    std::cout << "Address of p is: " << &p << std::endl;
    std::cout << "sizeof of p is:" << sizeof p << std::endl;

    p = nullptr;
    std::cout << "\nValue of p is: " << p << std::endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    std::vector<std::string> *p4 {nullptr};
    std::string *p5 {nullptr};

    std::cout << "\nsizeof p1 is: " << sizeof p1 << std::endl;
    std::cout << "sizeof p2 is: " << sizeof p2 << std::endl;
    std::cout << "sizeof p3 is: " << sizeof p3 << std::endl;
    std::cout << "sizeof p4 is: " << sizeof p4 << std::endl;
    std::cout << "sizeof p5 is: " << sizeof p5 << std::endl;
    
    return 0;
}