#include <iostream>
#include <cmath>

bool rook(int x1, int x2, int y1, int y2)
{
    if (x1 == x2 || y1 == y2)
    {
        return true;
    }
    return false;
}
bool bishop(int x1, int x2, int y1, int y2)
{
    if (std::abs(x1 - x2) == std::abs(y1 - y2))
    {
        return true;
    }
    return false;
}
bool queen(int x1, int x2, int y1, int y2)
{
    if (rook(x1, x2, y1, y2) || bishop(x1, x2, y1, y2))
    {
        return true;
    }
    return false;
}
bool knight(int x1, int x2, int y1, int y2)
{
    if (std::abs(x1 - x2) == 2 && std::abs(y1 - y2) == 1 || std::abs(x1 - x2) == 1 && std::abs(y1 - y2) == 2)
    {
        return true;
    }
    return false;
}
int main()
{
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if ((1 <= x1 && x1 <= 8) && (1 <= x2 && x2 <= 8) && (1 <= y1 && y1 <= 8) && (1 <= y2 && y2 <= 8))
    {
        if (x1 == x2 && y1 == y2)
        {
            std::cout << "Cant stay in one place";
        }
        else
        {
            std::cout << "a) Топ: " << rook(x1, x2, y1, y2) << std::endl;
            std::cout << "б) Офицер: " << bishop(x1, x2, y1, y2) << std::endl;
            std::cout << "в) Царица: " << queen(x1, x2, y1, y2) << std::endl;
            std::cout << "г) Кон: " << knight(x1, x2, y1, y2) << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid coordinates" << std::endl;
    }
}