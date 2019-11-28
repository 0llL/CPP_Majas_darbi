#include <iostream>
using namespace std;

int main(){
int a;
 cout<<"Ievadiet nenegativu skaitli.\n";
 cin>>a;
 
 if(a/10==0){
   cout<<"0\n";
 }else{
   cout<<(a/10-((a/10)/10)*10)<<"\n";  
 }
return 0;
}
