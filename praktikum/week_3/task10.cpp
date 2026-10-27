#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int left = (a < b) ? a : b;
    int right = (a > b) ? a : b;
    for (int i = left; i <= right; ++i){
        int temp = i;
        int narcissistic = 0;
        int counter = 0;
        while(temp>0){
            counter++;
            temp/=10;
        }
        temp = i;
        while(temp>0){
            int last = temp%10;
            int power_of = last;
            for(int i = 1;i<counter;++i){
                power_of *=last;
            }
            narcissistic+= power_of;
            temp/= 10;

        }
        if(narcissistic == i){
            std::cout << narcissistic << " ";

        }

    }
    return 0;
}