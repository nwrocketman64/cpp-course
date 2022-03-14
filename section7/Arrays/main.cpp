#include <iostream>

int main()
{
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    std::cout << "The first vowel is: " << vowels[0] << std::endl;
    std::cout << "The last vowel is: " << vowels[4] << std::endl;
    
    double hiTemps[] { 90.1, 89.8, 77.5, 81.6 };
    std::cout << "The first high temperature is: " << hiTemps[0]
              << std::endl;
    hiTemps[0] = 100.7;
    std::cout << "The first high temperature is: " << hiTemps[0]
              << std::endl;
              
    int testScore [5] {100, 90};
    std::cout << "The first score is: " << testScore[0] << std::endl;
    
    std::cout << "Notice the value of the array name: " << testScore
              << std::endl;
    
    return 0;
}
