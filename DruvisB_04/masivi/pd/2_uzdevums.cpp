#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
 int arr[3][3]={};
 int lielakais=-1;
 int rin, kol, sum=0;
 srand(time(NULL));
 for (int i=0; i<3; i++){
   for(int j=0; j<3; j++){
     arr[i][j]=rand()%101;
     if(arr[i][j]>lielakais){
       rin=i; kol=j;
       lielakais=arr[i][j];
     }
     cout<<"arr["<<i<<"]["<<j<<"]= "<<arr[i][j]<<" ";
   }
   cout<<"\n";
 }

cout<<"\n";
 for (int i=0; i<3; i++){
   sum+=arr[1][i];
 }
cout<<"Lielaka masiva vertiba ir "<<lielakais<<" un ta atrodas "<<rin<<" rinda un "<<kol
<<" kolona, 1  rindas summa ir "<<sum<<"\n";
  return 0;
}
