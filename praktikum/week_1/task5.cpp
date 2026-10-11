#include <iostream>

int main() {
    int number;

    std::cout << "Enter a positive four-digit number: ";
    std::cin >> number;

    int first = number % 10;
    int second = (number / 10) % 10;
    int third = (number / 100) % 10;
    int fourth = number / 1000;

    std::cout << "Digits in reverse order: "
              << first << '-'
              << second << '-'
              << third << '-'
              << fourth << '\n';

    return 0;
}