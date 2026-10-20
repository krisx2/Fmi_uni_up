#include <iostream>

int main()
{
    int a;
    int counter = 0;
    int sum = 0;
    int min_i = INT_MAX;
    int max_i = INT_MIN;

    while (true)
    {
        std::cin >> a;
        if(a == 0){
            break;
        }
        counter++;
        sum += a;
        min_i = std::min(a, min_i);
        max_i = std::max(a, max_i);
    }


    int average = sum / (double)counter;
    std::cout << "broi: " << counter << std::endl
              << "SUma :" << sum << std::endl
              << "max: " << max_i << std::endl
              << "min: " << min_i << std::endl
              << "average: " << average << std::endl;

    return 0;
}