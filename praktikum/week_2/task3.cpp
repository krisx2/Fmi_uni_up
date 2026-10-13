#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    if(a %4 == 0 && a%100 !=0 || a%400 == 0){
        std::cout << "Visokosna" << '\n';
    }
    else{
        std::cout << "Ne e visokosna" << '\n';
    }
}