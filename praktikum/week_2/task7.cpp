#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (c > b || a > d)
    {
        std::cout << "Nqma obshti" << std::endl;
    }
    else
    {
        int left;
        if (a < c)
        {
            left = a;
        }
        else
        {
            left = c;
        }

        int right;
        if (b > d)
        {
            right = b;
        }
        else
        {
            right = d;
        }
        std::cout << '[' << left << ' : ' << right << ']' << std::endl;
    }
}   