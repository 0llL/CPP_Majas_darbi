#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
double x;
string darb;
cout<<"ievadie decimaldaļskaitli, apaalot uz augsu- augsa, uz leju- leja, kvadratasakne- sakne \n";
cin>>x>>darb;
if(darb=="augsa"){
 cout<<"Rezultats ir "<< floor(x)+1;
}else if(darb=="leja"){
  cout<<"Rezultats ir "<< floor(x);
}else if(darb=="sakne"){
  cout<<"Rezultats ir "<< sqrt(x)+1;
}else{
  cout<<"Nav iespejamam veikt sadu darbibu\n";
}

return 0;
}

