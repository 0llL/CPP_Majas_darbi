#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

  int arr1[7]={};
  int arr2[7]={};
  int arr3[7]={};
  int sk=0;
  srand(time(NULL));
  for(int i=0; i<7; i++){
    arr1[i]=rand()%12;
    arr2[i]=rand()%12;
    arr3[i]=arr1[i]-arr2[i];
    if(arr2[i]<3){
      sk++;
    }
    cout<<"arr1["<<i<<"]= "<<arr1[i]<<" "<<"arr2["<<i<<"]= "<<arr2[i]<<" "<<"arr3["<<i<<"]= "<<arr3[i]<<"\n";
  }
  cout<<"Otra masiva "<<sk<<" elementu vertibas ir mazakas par 3";

  return 0;

}

