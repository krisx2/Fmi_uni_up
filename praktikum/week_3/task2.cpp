#include <iostream>

int main() {
    int a;
    std::cin >>a;
    int fact = 1;
    if(a >= 20) {
        std::cout << "prekaleno golqmo chislo" << std::endl;
        return 1;
    }
    for(int i = 1;i <= a;i++){
        fact*= i;
    }
    std::cout << fact << std::endl;
    return 0;
}