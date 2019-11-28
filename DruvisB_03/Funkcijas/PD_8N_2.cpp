#include <iostream>
#include <string>
using namespace std;

void rinda(int a){
 for(int i=0;i<a;i++) cout <<"*";
 cout <<"\n";
}

void trindas(){
 cout << "\n\n\n";
}

int main(){
 int a;
 string izvele;
   cout <<"Ievadiet rindas garumu \n";
   cin >>a;
   rinda(a);
   trindas();
}
