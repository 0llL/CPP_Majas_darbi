#include <iostream>
using namespace std;
void dubultot(int& a, int& b, int& c){
a*=2;
b*=2;
c*=2;
return;
}

int main(){
 int a, b, c;
 cout <<"Ievadiet 3 veselus skaitlus\n";
 cin >>a>>b>>c;
 dubultot(a, b, c);
 cout <<"a= "<<a<<" b= "<<b<<" c= "<<c<<"\n";
 return 0;
}
