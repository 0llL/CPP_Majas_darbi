#include <iostream>
using namespace std;

int main(){

int a;
do{
  cout<<"Ievadiet veseslu skaitli, kas noradis temperaturu celsija grados\n";
  cin>>a;
  cout<<"Temperatur F grados ir "<<a*9/5+32<<"\n";
}while(a>-50 && a<50);
  cout<<"Programma beidz darbu jo ievaditais skaitlis ir arpus atlauta diapozona";
return 0;
}

