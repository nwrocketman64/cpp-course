#include <iostream>

int main()
{
    int counter {10};
    int result {0};
    
    // Example 1
    std::cout << "Counter: " << counter << std::endl;
    
    counter = counter + 1;
    std::cout << "Counter: " << counter << std::endl;
    
    counter++;
    std::cout << "Counter: " << counter << std::endl;
    
    ++counter;
    std::cout << "Counter: " << counter << std::endl;
    
    // Example 2
    counter = 10;
    result = 0;
    
    std::cout << "Counter: " << counter << std::endl;
    
    result = ++counter;
    std::cout << "Counter: " << counter << std::endl;
    std::cout << "Result: " << result << std::endl;
    
    // Example 3
    counter = 10;
    result = 0;
    
    std::cout << "Counter: " << counter << std::endl;
    
    result = counter++;
    std::cout << "Counter: " << counter << std::endl;
    std::cout << "Result: " << result << std::endl;
    
    // Example 4
    counter = 10;
    result = 0;
    
    std::cout << "Counter: " << counter << std::endl;
    
    result = ++counter + 10;
    std::cout << "Counter: " << counter << std::endl;
    std::cout << "Result: " << result << std::endl;
    
    // Example 5
    counter = 10;
    result = 0;
    
    std::cout << "Counter: " << counter << std::endl;
    
    result = counter++ + 10;
    std::cout << "Counter: " << counter << std::endl;
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
