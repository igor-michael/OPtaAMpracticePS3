
#include <fstream>
using std::ifstream;
using std::ofstream;
 
#include <cstdlib>
#include <ctime>
 
const int SIZE=10;
const int m=2,n=3;
 //�������� ���� f �� ��������� ���� ����������� ������ �������, � ����� f � ���� g �������� 
 //����� �� ������� �� m �� �� ������� �� n. 
int main()
{
    srand(time(0));
    
    ofstream f("D:\\Ivaschenko\\f.txt");
    for (int i=0;i<SIZE;i++)
    {
        f<<rand()<<'\n';
    }
    f.close();
 
    ifstream f1("D:\\Ivaschenko\\f.txt");
    ofstream g("D:\\Ivaschenko\\g.txt");
 
    int buf;
    for (int i=0;i<SIZE;i++)
    {
        f1>>buf;
        if (buf%m==0 && buf%n!=0)
        {
            g<<buf<<'\n';
        }
    }
    f1.close(); g.close();
system("pause");
}
