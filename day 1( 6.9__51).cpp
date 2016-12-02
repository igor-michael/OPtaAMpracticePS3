//Програма, що видаляє зайві пробіли
//Пробіл вважається зайвим, якщо стоїть перед рядком, після або 
//якщо між словами пробілів більше ніж один

#include <iostream>
#include <string>
 using namespace std;
 int main()
{
string buf;
getline(cin, buf);
bool space_sleep = false;
string res;
for(int i=0; i<buf.length(); i++)
{
if(buf[i]==' ' && space_sleep==true)
{
continue;
}
if(buf[i]==' ' && space_sleep==false)
        {
            res.push_back(buf[i]);
            space_sleep = true;
        }
        else
        {
            res.push_back(buf[i]);
            space_sleep = false;
        }
    }
    cout<<res;
 system ("Pause");
    return 0;
 
}
