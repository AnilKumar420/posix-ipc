#include <iostream>
#include <vector>

class Example {
public:
    Example() : data(new int[10]) {}

    ~Example() {
        delete[] data; // Issue: potential memory leak
    }

    void addValue(int value) {
        if (size < 10) {
            data[size++] = value;
        }
    }

    int getValue(size_t index) const {
        return data[index]; // Issue: out-of-bounds access
    }

private:
    int* data;
    size_t size = 0;
};

int main() {
    Example ex;
    ex.addValue(42);
    std::cout << "Value at index 0: " << ex.getValue(0) << std::endl;
    std::cout << "Value at index 1: " << ex.getValue(1) << std::endl; // Issue: out-of-bounds access

    return 0;
}
