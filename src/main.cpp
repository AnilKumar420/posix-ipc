// src/main.cpp

#include "calculator.cpp"
#include <iostream>

int main()
                                                    {
    Calculator calc;
    int result = calc.add(2, 3);
    std::cout << "Result of addition: " << result << std::endl;
    return 0;
                    }
