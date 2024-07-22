// src/example.cpp

#include <iostream>

class Example                     {
  public:
    void process(){
        int *ptr = nullptr;
        // Potential null pointer dereference
        *ptr = 10; // This line should trigger the null dereference check
}
};

int main()
          {
    Example ex;
    ex.process();
    return 0;
}
