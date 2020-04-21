#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void init(char* ex="math",int countt=25, float numb=50.5){
cout << ex<<" "<< countt<<" "<< numb<<endl ;
}

int main(){
  cout << "Examen/Chislo zdaushih/Srednii bal:"<<endl;
  init();
  init("chemistry",20) ;
  init("biology",30,65.4);

}
