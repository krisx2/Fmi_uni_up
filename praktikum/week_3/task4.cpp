#include <iostream>

int main() {
    int a,b;
    std::cin >> a >> b;
    int left = (a < b) ? a : b;
    int right = (a > b) ? a : b;
    bool flag = true;
    for(int i = left; i <= right;++i){
        if (i % 3 == 0){
            continue;
        }
        else if(i % 7 == 0 && i % 3 != 0){
            std::cout << i << std::endl;
            flag = false;
            break;
        }
    }
    if(flag){
        std::cout << "NO SUCH NUMBER" << std::endl;
    }

    return 0;
}