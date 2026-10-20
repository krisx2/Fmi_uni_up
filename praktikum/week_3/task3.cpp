#include <iostream>

int main() {
    int x1 = 1;
    int x2 = 1;
    int a;
    std::cin >> a;
    if(a < 0){
        std::cout << "greshka" << std::endl;
    }
    std::cout << "0, 1, 1 ";
    for(int i = 3;i < a;++i){
        std::cout << x1+x2 << ", ";
        int temp = x2;
        x2 = x1 +temp;
        x1 = temp;
    }
    return 0;
}