#include <iostream>
using namespace std;

int main(){
int arr[10]={};
int v,j=0;

for(int i=0; i<10; i++){
  cout<<"Ievadiet skaitli"<<"\n";
  cin>>arr[i];
}

cout<<"Ievadet veselu skaitli"<<"\n";
 cin>>v;

for (int i=0; i<10; i++){
  //apstrada pirmos 9 elementus, 10 tiks apstradats Atseviski
  if(i<9){
    if(arr[i]==v && (j-i)==0){
      cout<<"Ievadita masiva sakuma vertiba ["<<i<<"]= "<<v;
      j++;
    }else{
      cout<<"Ievadita masiva sakuma vertiba ["<<i<<"]= "<<arr[j-(j-i)];
    }
  arr[i]=arr[j];
  j++;
}else{
  arr[i]=arr[j];
  if((j-i)!=0){
    arr[i]=0;
  }
  if(arr[i]==v && (j-i)==0){
    arr[i]=0;
    cout<<"Ievadita masiva sakuma vertiba ["<<i<<"]= "<<v;
  }else{
      cout<<"Ievadita masiva sakuma vertiba ["<<i<<"]= "<<arr[i-1];
    }
  }
    cout<<" Galiga masiva vertiba ["<<i<<"]="<<arr[i]<<"\n";;

}
  return 0;
}
