#include <iostream>
using namespace std;

int main(){

int a;
cout<<"Reizinas tabula skaitliem no 1 lidz 5\n";
for(int i=1; i<6;i++){
  for(int j=1;j<6; j++){
    cout<<j<<" * "<<i<<" = "<<i*j<<"  ";
  }
  cout<<"\n";
}
return 0;
}

