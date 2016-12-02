//Написати функцію для знаходження об'єму сфери
//Об'єм сфери = 4/3*PI*R^3
#include <iostream>
#include <cmath> 
 
double volume(double r)
{
    return (4/3*M_PI*pow(r,3));
}
 
int main()
{
    double R;
    std::cout << "R = ";
    std::cin >> R;
    
    std::cout << "V = " << volume( R) << std::endl;
 system ("Pause");   
    return 0;
}
