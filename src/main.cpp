// null_pointer_example.cpp
#include <iostream>

class Example {
public:
    Example() : ptr(nullptr) {}

    void setPtr(int* p) {
        ptr = p;
    }

    void usePtr() const {
        if (ptr) {
            std::cout << "Value: " << *ptr << std::endl; // Should be flagged if ptr is null
        } else {
            std::cout << "Pointer is null!" << std::endl;
        }
    }

private:
    int* ptr;
};

int main() {
    Example ex;
    ex.usePtr(); // This should be flagged if `ptr` is null
    return 0;
}
