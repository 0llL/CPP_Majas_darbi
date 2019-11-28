#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

  int arr1[8], arr2[8], arr3[8], sk=0;
  srand(time(NULL));

  for(int i=0; i<7; i++){
    arr1[i]=rand()%10+1;
    arr2[i]=rand()%10+1;
    arr3[i]=arr1[i]+arr2[i];
    if(arr1[i]>5){
      sk++;
    }
    cout<<"arr1["<<i<<"]= "<<arr1[i]<<" "<<"arr2["<<i<<"]= "<<arr2[i]<<" "<<"arr3["<<i<<"]= "<<arr3[i]<<"\n";
  }
  cout<<"\nPirmaja masiva "<<sk<<" elementu vertibas ir lielakas par 5";
  return 0;
}
