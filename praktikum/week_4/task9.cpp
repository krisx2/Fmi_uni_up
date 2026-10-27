#include <iostream>
#include <cmath>
void checkinput(int&x ){
    do
    {
        std::cin >> x;
    } while (x <= 0);
    
}
bool isPrime(int x)
{
    if (x == 1){
        return false;
    }
    for (int i = 2; i <= sqrt(x);++i){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
bool isArithmetic(int x,int y,int z){
    return (y- x == z-y) && (y - x != 0);
}

void countLines(int x,int y,int z,int &tp,int &wl){
    if(isPrime(x) && isPrime(y) && isPrime(z)){
        tp+= 10;
        wl++;
    }
    else if(isArithmetic(x,y,z)){
        tp+= 5;
        wl++;
    }
}

int main()
{
    int a1,a2,a3;
    int b1,b2,b3;
    int c1,c2,c3;
    checkinput(a1);
    checkinput(a2);
    checkinput(a3);
    checkinput(b1);
    checkinput(b2);
    checkinput(b3);
    checkinput(c1);
    checkinput(c2);
    checkinput(c3);
    int total_points = 0;
    int won_lines = 0;


    // redove
    countLines(a1,a2,a3,total_points,won_lines);
    countLines(b1,b2,b3,total_points,won_lines);
    countLines(c1,c2,c3,total_points,won_lines);

    //coloni
    countLines(a1,b1,c1,total_points,won_lines);
    countLines(a2,b2,c2,total_points,won_lines);
    countLines(a3,b3,c3,total_points,won_lines);

    // diagonali
    countLines(a1,b2,c3,total_points,won_lines);
    countLines(a3,b2,c1,total_points,won_lines);
    std::cout << "OBSH RES: " << total_points << std::endl
    << "PECH LINII: " << won_lines << std::endl
    << ((won_lines >= 2) ? "DJAKPOT": "NQMA DJAKPOT") << std::endl;

    return 0;
}