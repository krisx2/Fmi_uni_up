#include <iostream>

int main(){
    float x,y;
    std::cin >> x >> y;
    int inner = 1;
    int middle = 3*3;
    int outer = 5*5;
    double shot = x*x + y*y;
    
    if(shot <= inner){
        std::cout << 10 << '\n';

    }
    else if (shot <= middle){
        std::cout << 5;
    }
    else if (shot <= outer){
        std::cout << 1;
    }
    else{
        std::cout << "MISS";
    }
}