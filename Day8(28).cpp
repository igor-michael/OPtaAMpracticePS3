//28
#include <iostream>
using namespace std;
struct client{
    std::string iniciali;
    std::string adress;
    std::string birth;
    std::string visit;
    std::string encrypts;
    };
const int  encrypts(5206);           
void vvod(client cub[],int razmer);
void reshenie(client cub[],int razmer);
 
int main(){
    setlocale(LC_ALL, "Russian");
    int razm;
    std::cout<<"���������� �������� �����������: ";
    std::cin>>razm;
    std::cin.get();
    client client1[razm];
    vvod(client1,razm);
    reshenie(client1,razm);
}
void vvod(client cub[],int razmer){
    for(int a(0);a<razmer;a++){
        std::cout<<"��� �������: ";
        getline(std::cin,cub[a].iniciali);
        std::cout<<"������ �������: ";
        getline(std::cin,cub[a].adress);
        std::cout<<"���� �������� �������: ";
        getline(std::cin,cub[a].birth);
        std::cout<<"��������� ����� � �����������: ";
        getline(std::cin,cub[a].visit);
        std::cout<<"���� �������: ";
        getline(std::cin,cub[a].encrypts);
        
        std::cin.get();
    }
}
void reshenie(client cub[],int razmer){
    int mrot2( encrypts*2);
    for (int a(0);a<razmer;a++){
       
            std::cout<<cub[a].iniciali<<" �� "<<cub[a].iniciali<<"��������� ����� � �����������:"<<cub[a].visit<<std::endl;
 
        }
    }


