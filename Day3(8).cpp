//	Створити програму розрахунку математичного виразу(використовуючи ф-ї) 
//G=((sin a)^8+(sin b)^8)/(sin c)^8 
#include <cmath>
#include <iostream>
using namespace std;
void function_1()
{
double a,b,c,G;
cin >> a >> b >> c ;
 
cout << (pow(sin(a),8)+pow(sin(b),8))/pow(sin(c),8) << endl; 
}
int main()
{function_1(); 
system ("pause");
return 0;
}
