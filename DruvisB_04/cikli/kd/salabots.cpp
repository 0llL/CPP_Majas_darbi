#include <iostream>
using namespace std;
int main(){
int nMonth;
cout << "Please, enter number of the month: ";
cin >> nMonth;
if (nMonth>=3 && nMonth<=5){
  cout <<"\nIt's SPRING now!\n";
} else if (nMonth>=6 && nMonth<=8){
  cout <<"\nIt's SUMMER now!\n";
}else if (nMonth>=9 && nMonth<=11){
  cout <<"\nIt's AUTUMN now!\n";
}else{
  cout <<"\nIt's WINTER now!\n";
}
return 0;
}
