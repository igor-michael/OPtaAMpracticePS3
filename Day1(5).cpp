#include <iostream.h>
#include <string.h>

int main(){
    setlocale( LC_ALL,"Russian" );
    char text[100];
    int length, count;
    gets(text);
    length = strlen(text);
    for ( int i = 0; i < length; i++) {
        if (text[i]>= 'a' && text[i]<='z' ) {
        count++;
        } else {
        continue;
        }
    }
    cout<<"Количество латинских букв: "<<count<<endl;
    system("pause");
    return 0;
    }
    
