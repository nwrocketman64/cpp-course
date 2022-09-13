#include <iostream>

int main()
{
    int scores[] {100, 95, 89};
    int *score_ptr {scores};

    std::cout << "Value of score_ptr: " << score_ptr << std::endl;

    std::cout << "\nArray Subscript Notation---------------" << std::endl;
    std::cout << scores[0] << std::endl;
    std::cout << scores[1] << std::endl;
    std::cout << scores[2] << std::endl;

    std::cout << "\nPointer Subscript Notation-------------" << std::endl;
    std::cout << score_ptr[0] << std::endl;
    std::cout << score_ptr[1] << std::endl;
    std::cout << score_ptr[2] << std::endl;

    std::cout << "\nPointer Offset Notation----------------" << std::endl;
    std::cout << *score_ptr << std::endl;
    std::cout << *(score_ptr + 1) << std::endl;
    std::cout << *(score_ptr + 2) << std::endl;

    std::cout << "\nArray Offset Notation------------------" << std::endl;
    std::cout << *scores << std::endl;
    std::cout << *(scores + 1) << std::endl;
    std::cout << *(scores + 2) << std::endl;

    std::cout << std::endl;
    return 0;
}