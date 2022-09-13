#include <iostream>
#include <string>

int main()
{
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while (*score_ptr != -1)
    {
        std::cout << *score_ptr << std::endl;
        score_ptr++;
    }

    std::cout << "\n-------------------------------" << std::endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        std::cout << *score_ptr++ << std::endl;

    std::cout << "\n-------------------------------" << std::endl;
    std::string s1 {"Nathan"};
    std::string s2 {"Nathan"};
    std::string s3 {"Webb"};

    std::string *p1 {&s1};
    std::string *p2 {&s2};
    std::string *p3 {&s1};

    std::cout << std::boolalpha;
    std::cout << p1 << "==" << p2 << ": " << (p1 == p2) << std::endl;
    std::cout << p1 << "==" << p3 << ": " << (p1 == p3) << std::endl;

    std::cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << std::endl;
    std::cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << std::endl;

    p3 = &s3;
    std::cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << std::endl;
    
    std::cout << "\n-------------------------------" << std::endl;
    char name[] {"Nathan"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0];
    char_ptr2 = &name[3];

    std::cout << *char_ptr2 << " " << *char_ptr1 << " " << (char_ptr2 - char_ptr1) << std::endl;

    std::cout << std::endl;

    return 0;
}