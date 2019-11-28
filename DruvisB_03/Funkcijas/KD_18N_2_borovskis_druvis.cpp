#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void saknes(int d, int a, int b, int c){
 if(d>0){
   cout <<"Ir 2 saknes: x1= "<<(-b+sqrt(d))/(2*a)<<" x2= "<<(-b-sqrt(d))/(2*a)<<"\n";
 }else if(d==0){
   cout <<"Ir 1 sakne: x= "<<-b/(2*a)<<"\n";
 }else{
   cout <<"Realu saknu nav.\n";
 }
}

int main(){
 int a,b,c,d;
 string izvele;
 
 do{
   for(int i=0; i<70; i++){
      cout <<"*";
      }
   cout <<"\nIevadiet 3 kvadratvienadojuma koeficentus:\n";
   cin >>a>>b>>c;
   d=b*b-4*a*c;
   saknes(d,a,b,c);
   cout <<"Vai velaties turpinat?(J-ja, citi taustini- ne)\n";
   cin >>izvele;
 }while(izvele=="j" || izvele=="J");

return 0;
}
