//Створити функцію, що виявляє просте число введено чи ні 
#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

 void function()
{
     int n;  
     int d;  
     int r;  
 
     scanf("%d", &n);
     d = 2;        
     do {
        r = n % d;
        if (r != 0) d++;
     }
     while ( r != 0 ); 
     if (d == n)
       printf("%d - Proste" ,n);
     else  printf("%d - Ne proste" ,n);
     }
     int main()
{
     function(); 
system ("pause");
return 0;
}
   
