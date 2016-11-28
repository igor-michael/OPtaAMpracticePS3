#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
bool f(int i) {
    return (isalpha(i));
}
int main() {
    string str;
    getline(cin,str);
    cout<<count_if(str.begin(),str.end(), f);
        system("pause");
    return 0;
}
