#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b){
  return a+b;
}

int main(){
 int a,b;
 string izvele;
 do{
   cout <<"Ievadiet 2 veselus skaitlus \n";
   cin >>a>>b;
   cout <<"Summa ir: "<<sum(a,b)<<"\n";
   cout <<"Vai velaties turpinat? (J- ja, citi taustini- ne)\n";
   cin >>izvele;
   }while(izvele=="j" || izvele =="J");
 return 0;
}

