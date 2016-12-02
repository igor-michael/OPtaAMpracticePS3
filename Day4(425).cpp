//Дані дійсні числа S,T. Отримати N=F(T,-2*S,1.17)+F(2.2,T,S-T) де F(A,B,C)=A+B+C/A*B
#include <iostream>
using namespace std;
 
double function(double a, double b, double c)
{
    return (a + b + c/(a*b));
}
 
int main()
{
    double S, T, res; 
    cout<<"Vvedit' pochatkovi znachen'a  \n";
    cin>>S>>T;
    res = function(T, -2*S, 1.17) + function(2.2, T, S-T);
    cout<<"F: "<<res;
    system ("Pause");
    return 0;
}
