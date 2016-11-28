#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char stroka[]="ouxct8****jg6rivd++lh+";
    char simvol;
    int j=0;
    cout<<stroka<<endl;
    cout<<"Vvedite iskomy simvol: ";
    cin>>simvol;
    for(int i=0; stroka[i]!='\0'; i++)
    {
        if(stroka[i]==simvol)
            {j++;}
    }
    cout<<"Simvol "<<simvol<<" vstrechaetsa "<<j<<" raz"<<endl;
    getch();
    return 0;   
}
