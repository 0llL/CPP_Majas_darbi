#include <iostream>
#include <string>
using namespace std;
int main(){
int x,y;
string darb;
cout<<"ievadiet x un y vertības, ka ari veicamo  darbibu: + vai -\n";
cin>>x>>y>>darb;
if(darb=="+"){
  cout<<x<<" un "<<y<<" summa ir "<<x+y<<"\n";
}else if(darb=="-"){
  cout<<x<<" un "<<y<<" starpiba ir "<<x-y<<"\n";
}else{
  cout<<"Doto darbibu nav iespejams veikt\n";
}
return 0;
}

