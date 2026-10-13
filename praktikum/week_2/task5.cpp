#include <iostream>

int main(){
    double a,b;
    char c;
    std::cin >> a >> b >> c;
    switch(c){
        case '+':
        std::cout << a + b;
        break;
        case '-':
        std::cout << a-b;
        break;
        case '*':
        std::cout << a*b;
        break;
        case '/':
        if (a == 0 || b == 0){
            std::cout << "greshka delenie na nula";
        }
        else{
            std::cout << a/b;
        }
        break;
        default:
        std::cout << "NEVALIDEN ZNAK" << '\n';
        break;

    }

}