#include <iostream>

int main() {
    int value = 100;
    int *ptr = nullptr;
    ptr = &value;
    std::cout << *ptr << std::endl;
    return 0;
}