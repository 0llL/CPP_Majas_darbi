#include <iostream>
#include <math.h>
using namespace std;

int main(){
double z,x,zm,zl,sum=0,sk=0,i=0;
cout<<"Vertibu tabula\n";
zm=pow(acos(0.05*0.8),3);
zl=pow(acos(0.05*0.8),3);

  for(double x=0.8;x<=19;x++){
    z=pow(acos(0.05*x),3);
      if(zm>z) zm=z;
      if (zl<z)zl=z;
      i++;
      cout<<i<<". "<<"x= "<<x<<"  "<<"z= "<<z<<"\n";
      sum+=z;
      if(z<10) sk++;
    }

cout<<"Visu z vertibu summa ir "<<sum<<"\n";
cout<<"z vertibu skaits, kas mazaks par 10 ir "<<sk<<"\n";
cout<<"z lielaka vertiba ir "<<zl<<" , z mazaka vertiba ir "<<zm<<"\n";
  return 0;
}
