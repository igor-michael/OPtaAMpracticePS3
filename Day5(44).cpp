//������� �������, ������ �� ���� ���� �����
#include <iostream>
#include <conio.h>
#include <cstdio>
#include <windows.h>
 
using namespace std;
 
struct children
{
    char surname[15];       
    char adress[15];        
    char c[15];        
};
 
int main()
{
    setlocale (LC_ALL, "rus");
    int n;
    cout << "������� ���-�� ����������: ";
    cin >> n;
 
    children *mas = new children[n];
 
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-� ������: " << endl;
        cout << "�������: ";
        scanf("\n");
        cin.getline(mas[i].surname, 15);
        cout << "������: ";
        cin.getline(mas[i].adress, 15);
        cout << "�����: ";
        cin.getline(mas[i].c, 15);
        cout << endl;
    }
 
    system("pause");
    return 0;
}
