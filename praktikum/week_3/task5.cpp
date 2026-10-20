#include <iostream>

int main() {
    int a,b;
    std::cin >> a >> b;
    if(a < 0 || b < 0){
        std::cout << "ESTESTVENI CHISLA" << std::endl;
        return 0;
    }

    int left = (a < b) ? a : b;
    int right = (a > b) ? a : b;
    bool flag = true;
    for(int i = left; i < right;++i){
        int temp = i;
        int reversed = 0;
        while(temp> 0){
            int last = temp % 10;
            reversed = (reversed *10) + last;
            temp/= 10;

        }
        if (reversed ==i){
            std::cout << i <<' ';
        }
    }
    return 0;
}