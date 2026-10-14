#include <iostream>
#include <cmath>

int main() {
        double a,b,c;
        std::cin >> a >> b >> c;
        double x1,x2;

        if(a == 0 && b == 0){
            if(c==0){
                std::cout << "VSQKO";

            }
            else{
               std::cout << "NQMA"; 
            }
            
        }
        else if (a== 0 && b!= 0){
            x1 = -c/b;
            std::cout << "x= " << x1 << std::endl;

            
        }
        else{
            double D = b*b - 4*a*c;
            if(D>0){
                x1 = (-b + sqrt(D))/(2*a);
                x2 = (-b - sqrt(D))/(2*a);
                std::cout << "x1 = "<< x1 << " x2 = " << x2 << std::endl;
    
            }
            else if (D==0){
                x1 = -b/2*a;
                std::cout << "x= " << x1 << std::endl;
            }
            else{
                std::cout << "NQMA";
            }
        }

    return 0;
}