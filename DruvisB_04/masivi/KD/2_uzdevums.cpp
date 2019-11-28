#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
 int arr[4][4]={};
 int mazakais=51;
 int rin, kol, sum=0;
 srand(time(NULL));
 for (int i=0; i<4; i++){
   for(int j=0; j<4; j++){
     arr[i][j]=rand()%51+1;
     if(arr[i][j]<mazakais){
       rin=i; kol=j;
       mazakais=arr[i][j];
     }
     cout<<"arr["<<i<<"]["<<j<<"]= "<<arr[i][j]<<" ";
   }
   cout<<"\n";
 }
 arr[rin][kol]=50;
cout<<"\n";
 for (int i=0; i<4; i++){
   sum+=arr[0][i];
 }
cout<<"Mazaka masiva vertiba ir "<<mazakais<<" un ta atrodas "<<rin<<" rinda un "<<kol<<" kolona,"<<
"videja vertiba 0 rinda ir "<<sum/4.0<<"\n";
  return 0;
}

