#include <iostream>
#include <string>
using namespace std;

int faktorials(int a){
 if(a>1){
  return a*faktorials(a-1);
 }else{
  return 1;
 }
}

int main(){
 int a;
 string b;
 
  do {
    cout<<"Ievadiet veselu skaitli no 1 lidz 12\n";
    cin >>a;
  
    if(a>=1 && a<=12){
      cout <<a<<" faktorials ir "<<faktorials(a)<<"\n";
    }else{
      cout <<"Ievaditais skaitlis neatbilst prasibam. \n";
    }
    cout<<"Vai velaties turpinat?(J-ja, citi taustini- ne)\n";
    cin >>b;
  }while (b=="j" || b=="J");
 
 return 0;
}    
