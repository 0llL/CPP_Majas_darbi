#include <iostream>
using namespace std;

int main(){
int a, b, n;
 cout<<"Noradiet piradzinu cenu latos un santimos, un to skaitu. \n";
 cin >>a>>b>>n;
 cout <<"Jamaksa lati: "<<a*n+(b*n)/100<<" santimi: "<<(b*n)%100<<"\n";
return 0;
}
