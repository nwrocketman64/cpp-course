#include <iostream>
#include <string>
#include <vector>

int main()
{
    int score{100};
    int *score_ptr{&score};

    std::cout << *score_ptr << std::endl;

    *score_ptr = 200;

    std::cout << *score_ptr << std::endl;
    std::cout << score << std::endl;

    std::cout << "\n------------------" << std::endl;
    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    std::cout << *temp_ptr << std::endl;
    temp_ptr = &low_temp;
    std::cout << *temp_ptr << std::endl;

    std::cout << "\n------------------" << std::endl;
    std::string name{"Nathan"};
    std::string *string_ptr{&name};

    std::cout << *string_ptr << std::endl;
    name = "Webb";
    std::cout << *string_ptr << std::endl;

    std::cout << "\n------------------" << std::endl;
    std::vector<std::string> stooges{"Larry", "Moe", "Curly"};
    std::vector<std::string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    std::cout << "First stooge: " << (*vector_ptr).at(0) << std::endl;
    std::cout << "Second stooge: " << (*vector_ptr).at(1) << std::endl;
    std::cout << "Third stooge: " << (*vector_ptr).at(2) << std::endl;

    std::cout << "Stooges: ";
    for (auto stooge: *vector_ptr)
        std::cout << stooge << " ";
    std::cout << std::endl;

    std::cout << std::endl;

    return 0;
}