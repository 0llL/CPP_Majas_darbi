#include <iostream>
#include <string>
using namespace std;
int main(){
double x,y;
char darb;
cout<<"ievadiet x un y vertības, ka ari veicamo  darbibu: *, /, +, - \n";
cin>>x>>y>>darb;
switch(darb){
  case '*':
  cout<<x<<" un "<<y<<" reizinajums ir "<<x*y<<"\n";
  break;
  case '/':
  cout<<x<<" un "<<y<<" dalijums ir "<<x/y<<"\n";
  break;
 case '+':
 cout<<x<<" un "<<y<<" summa ir "<<x+y<<"\n";
 break;
 case'-':
 cout<<x<<" un "<<y<<" starpiba ir "<<x*y<<"\n";
 break;
  default:
  cout<<"Doto darbibu nav iespejams veikt\n";
}
return 0;
}

