#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define S_BUF 255
 
int main(){
char str[S_BUF];
printf("input text: "); gets(str);
unsigned int len = strlen(str);   
 
unsigned int i;
int count = 0;
if(str[0]=='b')count++;
for(i = 0 ; i < len; i++ )if(str[i]==' '&&str[i+1]=='b')count++;
printf("count words on (b) %d", count );
getch();
return 0;
}
