#include <iostream>

int main() {
    int a;
    int counter = 0;
    do{
        std::cin >> a;
        counter++;
    }
    while(!(1<= a && a <= 100));
    std::cout << counter << std::endl;
    return 0;
}