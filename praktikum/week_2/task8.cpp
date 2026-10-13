#include <iostream>

int main()
{
    unsigned int a;
    std::cin >> a;
    float price = 0;
    if (a <= 100) {
        price = a * 0.10;
    } 
    else if (a <= 250) {
        price = (100 * 0.10) + ((a - 100) * 0.20);
    } 
    else {
        price = (100 * 0.10) + (150 * 0.20) + ((a - 250) * 0.35);
    }
    std::cout << "Cena: " << price +  5 << " lv." << std::endl;
}