#include <iostream>
#include <string.h>
using namespace std;

struct Person{
       char name[15];
       int  born;
       };

int main(){
    setlocale( LC_ALL,"Russian" );
    int n,year,curentYear = 2016;
    cout<<"¬ведите количество людей";
    cin>>n;
    cout<<"¬ведите количество лет ";
    cin>>year;
    Person person[n];
 
    
    for (int i = 0 ; i < n ; i++) {
        cin>>person[i].name;
        cin>>person[i].born;
        
        if ((person[i].born >= (curentYear - year)) && (person[i].born < curentYear)) {
           cout<<person[i].name<<"\t"<<person[i].born<<endl;
        } else {
        continue;
        }
    }
   
    system("pause"); 
    return 0;
}
