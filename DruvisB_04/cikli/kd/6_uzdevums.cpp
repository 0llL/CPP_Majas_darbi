#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int k,m,i=0;
cout<<"Vertibu tabula\n";
for(double x=-1.7;x<=9.4;x+=9.3){
  for(double y=0;y<=3; y+=0.75){
    cout<<"x="<<x<<" y="<<y<<" sinx="<<sin(x)<<" siny="<<sin(y)<<"\n";
  }
}
return 0;
}

