#include <iostream>
using namespace std;

int skaits(int a){
 return (a%2==0)?a/2:a/2+1;
}

int main(){
int a,b,c;
 
 cout << "Ievadiet skolenu skaitu katra klase \n";
 cin >>a>>b>>c;
 cout <<"Minimalais solu skaits ir "<<skaits(a)+skaits(b)+skaits(c)<<"\n";

return 0;
}
