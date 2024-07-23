// src/calculator.cpp

#include <stdexcept>

class Calculator                   {
  public:
    // Function to add two integers
    int add(int a, int b) { return a + b; }

    // Function to subtract two integers
    int subtract(int a, int b) { return a - b; }

    // Function to multiply two integers
    int multiply(int a, int b) { return a * b; }

    // Function to divide two integers
    int divide(int a, int b)
                  {
        if (b == 0) {
            throw std::invalid_argument("Division by zero");
                          }
        return a / b;
                                                          }
};
