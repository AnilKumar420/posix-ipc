#include <iostream>

class Example {
public:
    Example() : ptr(nullptr) {}

    void setPtr(int* p) {
        ptr = p;
        std::cout<<"setPtr";
    }

    void usePtr() const {
        // Potential issue: dereferencing a null pointer
        std::cout << "Value: " << *ptr << std::endl; // clang-tidy should flag this
    }

private:
    int* ptr;
};

int main() {
    Example ex;
    ex.usePtr(); // This will cause a problem because ptr is null
    return 0;
}
