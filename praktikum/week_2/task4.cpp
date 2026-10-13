#include <iostream>

int main(){
    char c;
    std::cin >> c;
    if('a'<= c && c <= 'z'){
        std::cout << char(c -'a' + 'A') << std::endl;
    }
    else if ('A' <= c && c <='Z'){
        std::cout << char(c - 'A' + 'a') << std::endl;
    }
    else if ('0' <= c && c <= '9'){
        std::cout << "STOINOST:" << c <<'\n'; 
    }
    else{
        std::cout << "Specialen" << '\n';
    } 
}