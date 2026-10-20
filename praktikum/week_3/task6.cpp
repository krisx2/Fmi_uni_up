#include <iostream>

int main() {
    int a;
    std::cin >> a;
    int counter = 0;
    for(int i = 0;i <= 9;++i){
        int temp = a;
        while(temp){
            if (i == (temp % 10)){
                counter++;
            }
            temp /= 10;
        }
        std::cout << i << " : " << counter << std::endl;
        counter = 0;
    }
    return 0;
}