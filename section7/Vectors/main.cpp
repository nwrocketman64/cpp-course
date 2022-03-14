#include <iostream>
#include <vector>

int main()
{
    std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    std::cout << vowels[0] << std::endl;
    std::cout << vowels[4] << std::endl;
    
    std::vector <int> testScores {100, 98, 89};
    std::cout << "Test scores using vector syntax:" << std::endl;
    std::cout << testScores.at(0) << std::endl;
    std::cout << testScores.at(1) << std::endl;
    std::cout << testScores.at(2) << std::endl;
    std::cout << "There are " << testScores.size()
              << " scores in the vector." << std::endl;
              
    std::cout << "Enter 3 test scores: ";
    std::cin >> testScores.at(0);
    std::cin >> testScores.at(1);
    std::cin >> testScores.at(2);
    
    std::cout << "Updated test scores:" << std::endl;
    std::cout << testScores.at(0) << std::endl;
    std::cout << testScores.at(1) << std::endl;
    std::cout << testScores.at(2) << std::endl;
    
    int newScore {0};
    std::cout << "Enter a test score to add to the vector: ";
    std::cin >> newScore;
    
    testScores.push_back(newScore);
    
    std::cout << "Updated test scores:" << std::endl;
    std::cout << testScores.at(0) << std::endl;
    std::cout << testScores.at(1) << std::endl;
    std::cout << testScores.at(2) << std::endl;
    std::cout << testScores.at(3) << std::endl;
    std::cout << "There are " << testScores.size()
              << " scores in the vector." << std::endl;
    return 0;
}
