//	Визначити значення функцiiу=f(x) на промiжку [a,b] 
//з  кроком  h використовуючи для обчислення значення функцii 
//пiдпрограму-функцiю.
//y = exp(x-0.8)/tg(3x)    a=-2pi; b=2pi; h= 0,8
#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
 
void function_2()
{
    float PI=3.14;
    double min = -2.0*PI, max = 2.0*PI, step = 0.8;
    for (double x = min; x <= max; x += step)
    {
    std::cout << std::setw(6) << x << '\t' << std::setw(6) << (exp(x-0.8))/tan(3*x) << '\n';
    std::cout << '\n';
    }
}
 int main()
 {    
   function_2();
    system("pause");
    return 0;
}
 
