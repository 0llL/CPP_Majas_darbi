#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
int aka, tuksa=0;
aka=(rand()%101)-1;
if(aka>0){
  cout<<"aka kaste ir "<<aka<<" prieksmets, tie tika parvietoti uz tukso kasti.\n";
  tuksa=aka;
  aka=0;
}else{
  cout<<"aka kaste ir tuksa";
}
return 0;
}

