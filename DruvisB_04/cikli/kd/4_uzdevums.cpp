#include <iostream>
using namespace std;

int main(){
int sk,i=0;
cout<<"Ievadiet plaksnu skaitu 100...10000 diapazona. \n";
cin>>sk;
if(10000>=sk && sk>=100){
  do{
    sk-=i*i;
    i++;
  }while(sk>=i*i);
  cout <<"Bus "<<i-1<<" stavi piramidai\n";
}else{
  cout<<"plaksnu skaits neatbilst nosacijumiem.";
}
  return 0;
}

