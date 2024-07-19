#include <iostream>

class MyClass {
public:
    MyClass() : data(nullptr) {}

    void setData(int* d) {
        data = d;
    }

    void printData() const {
        // Potential issue: dereferencing a null pointer
        std::cout << "Data: " << *data << std::endl; // clang-tidy should flag this
    }

private:
    int* data;
};

int main() {
    MyClass obj;
    obj.printData(); // This will cause a problem because data is null
    return 0;
}
