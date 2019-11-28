#include <iostream>
using namespace std;

int main(){

int x1, x2, sum=0;

  cout<<"Ievadiet 2 skaitlus\n";
cin>>x1>>x2;

for(int i=x1; i<x2; i++){
  sum+=i;
}
cout<<"No "<<x1<<" lidz "<<x2<<" skaitlu summa ir "<<sum<<"\n";


return 0;
}

