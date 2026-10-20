#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int s = n;
    int reversed = 0;
    while(n> 0){
        int last = n % 10;
        reversed = (reversed *10) + last;
        n/= 10;
    }
    std::cout<< reversed << s << std::endl;
    return 0;
}