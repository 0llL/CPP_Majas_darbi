#include <iostream>
using namespace std;
void dalas(int a, int b){
  int k;
  int rezultats=0;
  if(a%7==0){
    k=0;
  }else{
    k=7-a%7;
  }
  if(a>100 && b<10000){
 for(int i=a+k;i<=b;i+=7){
 rezultats++;
 }
  }
  cout <<rezultats<<" skaitli dalas ar 7 ["<<a<<";"<<b<<"] intervala\n";
}

int main(){
 int a,b;
 cout <<"Ievadi 2 skaitļus intervala no 100 lidz 10000\n";
 cin >>a>>b;
dalas(a, b);
return 0;
}
