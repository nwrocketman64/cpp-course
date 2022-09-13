#include <string>
#include <vector>
#include <iostream>

int main()
{
    int num {100};
    int &ref {num};

    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    num = 200;
    std::cout << "\n---------------------------------" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    ref = 300;
    std::cout << "\n---------------------------------" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    std::cout << "\n---------------------------------" << std::endl;
    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};

    for (auto str: stooges)
        str = "Funny";

    for (auto str: stooges)
        std::cout << str << std::endl;
    
    std::cout << "\n---------------------------------" << std::endl;
    for (auto &str: stooges)
        str = "Funny";

    for (auto const &str: stooges)
        std::cout << str << std::endl;

    std::cout << std::endl;

    return 0;
}