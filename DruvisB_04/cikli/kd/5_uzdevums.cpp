#include <iostream>
#include <math.h>
using namespace std;

int main(){
double y,rez;
cout<<"Ievadiet y vertibu\n";
cin>>y;
for(double x=0.5; x<=1; x+=0.5){
    cout<<"ja x= "<<x<<" un y= "<<y<<" tad rezultats ";
    if(x+y<-2){
      rez=pow(pow(x,4*y),0.4)+log10(sqrt(y-x/(y-0.8)));
      cout<<rez<<"\n";
    }else if(x+y<=0 && x+y>=-2){
      cout <<2.3<<"\n";
    }else{
      rez=((cbrt(x)-cbrt(y))/x)-y;
      cout<<rez<<"\n";
    }
}
  return 0;
}

