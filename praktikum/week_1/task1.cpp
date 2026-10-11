
#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "suma: " << a + b << std::endl;
    std::cout << "Razlika: " << a - b << std::endl;
    std::cout << "proizvedenie: " << a * b << std::endl;
    std::cout << "chastno: " << a / b << '\n';
    std::cout << "ostatuk: " << a % b << std::endl;

    return 0;
}