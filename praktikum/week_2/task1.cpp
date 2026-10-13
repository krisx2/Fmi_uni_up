#include <iostream>

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;
    std::cout << a*(a > b && a > c) + b*(b> a && b > c) + c*(c > a && c > b);
    
}