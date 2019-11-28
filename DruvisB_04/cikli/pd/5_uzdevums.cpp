#include <iostream>
using namespace std;

int main(){
int y, funkcV =5000;
int mainigV=-20;
for(double x=-20; x<=20; x+=0.5){
  y=5*x*x-3*x+4;
  cout<<"Ja, x= "<<x<<" ,tad y = "<<y<<"\n";
  if(funkcV>y){
    funkcV=y;
    mainigV=x;
  }
}

cout<<"Mazaka funkcijas vertiba ir "<<funkcV<<" , x = "<<mainigV<<"\n";

return 0;
}

