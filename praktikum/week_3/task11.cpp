#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a;
    int max_diff = 0;
    int max_diff_second = 0;
    int prev;
    std::cin >> prev;
    for (int i = 1; i < n; ++i)
    {
        std::cin >> a;

        int difference = std::abs(a - prev);
        if (difference > max_diff)
        {
            max_diff_second = max_diff;
            max_diff = difference;
        }
        prev= a;
    }
    std::cout << max_diff_second << std::endl;
    return 0;
}