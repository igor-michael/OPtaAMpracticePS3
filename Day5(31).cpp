//³��� ���� �� ����� �����. ������ ������� ���� ����� �������. 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
using namespace std;
 int S;
struct building     
{                  
    char *Rost;    
    char *Gender; 
    
         double Re;
    double Im;
         }z;                 
 
int main()
{
    int S;
    setlocale (LC_ALL, "rus");
 
    building apartment1;   
 
    apartment1.Rost = "168"; 
    apartment1.Gender = "�";      
    
 
    cout << "����: " << apartment1.Rost << endl;
    cout << "���: " << apartment1.Gender << endl;
    
    building apartment2;   
 
    apartment2.Rost = "172"; 
    apartment2.Gender = "�";      
    
 
    cout << "����: " << apartment2.Rost << endl;
    cout << "���: " << apartment2.Gender << endl;
    
    building apartment3;   
 
    apartment3.Rost = "180"; 
    apartment3.Gender = "�";      
    
 
    cout << "����: " << apartment3.Rost << endl;
    cout << "���: " << apartment3.Gender << endl;
    
    building apartment4;   
 
    apartment4.Rost = "182"; 
    apartment4.Gender = "�";      
    
 
    cout << "����: " << apartment4.Rost << endl;
    cout << "���: " << apartment4.Gender << endl;
    building apartment5;   
 
    apartment5.Rost = "164"; 
    apartment5.Gender = "�";      
    
 
    cout << "����: " << apartment5.Rost << endl;
    cout << "���: " << apartment5.Gender << endl;
    
    building apartment6;   
 
    apartment6.Rost = "200"; 
    apartment6.Gender = "�";      
    
 
    cout << "����: " << apartment6.Rost << endl;
    cout << "���: " << apartment6.Gender << endl;
    building apartment7;   
 
    apartment7.Rost = "160"; 
    apartment7.Gender = "�";      
    
 
    cout << "����: " << apartment7.Rost << endl;
    cout << "���: " << apartment7.Gender << endl;
    
    building apartment8;   
 
    apartment8.Rost = "172"; 
    apartment8.Gender = "�";      
    
 
    cout << "����: " << apartment8.Rost << endl;
    cout << "���: " << apartment8.Gender << endl;
    
    building apartment9;   
 
    apartment9.Rost = "198"; 
    apartment9.Gender = "�";      
    
 
    cout << "����: " << apartment9.Rost << endl;
    cout << "���: " << apartment9.Gender << endl;
    
    building apartment10;   
 
    apartment10.Rost = "181"; 
    apartment10.Gender = "�";      
    
 
    cout << "����: " << apartment10.Rost << endl;
    cout << "���: " << apartment10.Gender << endl;
    
    building apartment11;   
 
    apartment11.Rost = "180"; 
    apartment11.Gender = "�";      
    
 
    cout << "����: " << apartment11.Rost << endl;
    cout << "���: " << apartment11.Gender << endl;
    
    building apartment12;   
 
    apartment12.Rost = "150"; 
    apartment12.Gender = "�";      
    
 
    cout << "����: " << apartment12.Rost << endl;
    cout << "���: " << apartment12.Gender << endl;
    
    building apartment13;   
 
    apartment13.Rost = "160"; 
    apartment13.Gender = "�";      
    
 
    cout << "����: " << apartment13.Rost << endl;
    cout << "���: " << apartment13.Gender << endl;
    
    building apartment14;   
 
    apartment14.Rost = "200"; 
    apartment14.Gender = "�";      
    
 
    cout << "����: " << apartment14.Rost << endl;
    cout << "���: " << apartment14.Gender << endl;
    
    building apartment15;   
 
    apartment15.Rost = "166"; 
    apartment15.Gender = "�";      
    
 
    cout << "����: " << apartment15.Rost << endl;
    cout << "���: " << apartment15.Gender << endl;
    
    building apartment16;   
 
    apartment16.Rost = "162"; 
    apartment16.Gender = "�";      
    
 
    S=(168+172+180+182+200+172+181+180+200)/9;
    cout<<"������� ���� ������ = "<<S;
    
 system ("pause");
return 0;
}
