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
    std::cout<<"Количество клиентов поликлиники: ";
    std::cin>>razm;
    std::cin.get();
    client client1[razm];
    vvod(client1,razm);
    reshenie(client1,razm);
}
void vvod(client cub[],int razmer){
    for(int a(0);a<razmer;a++){
        std::cout<<"ФИО клиента: ";
        getline(std::cin,cub[a].iniciali);
        std::cout<<"Адресс клиента: ";
        getline(std::cin,cub[a].adress);
        std::cout<<"Дата рождения клиента: ";
        getline(std::cin,cub[a].birth);
        std::cout<<"Последний визит в поликлинику: ";
        getline(std::cin,cub[a].visit);
        std::cout<<"Шифр клиента: ";
        getline(std::cin,cub[a].encrypts);
        
        std::cin.get();
    }
}
void reshenie(client cub[],int razmer){
    int mrot2( encrypts*2);
    for (int a(0);a<razmer;a++){
       
            std::cout<<cub[a].iniciali<<" из "<<cub[a].iniciali<<"Последний визит в поликлинику:"<<cub[a].visit<<std::endl;
 
        }
    }


