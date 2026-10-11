#include <iostream>

int main () {
    char symbol;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    std::cout << (int)symbol<< '\n';

    return 0;
}