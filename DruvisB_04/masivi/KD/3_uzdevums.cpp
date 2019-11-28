#include <iostream>

using namespace std;

int main(){
 int temp[8]={};
 int sum=0;
  for(int i=0; i<8; i++){
    cout<<"Ievadi skaitli"<<"\n";
    cin>>temp[i];
    sum+=temp[i];
  }

  for (int i=0; i<8; i++){
    cout<<"temp["<<i<<"]= "<<temp[i]<<" ";
  }
  cout<<"\n\n"<<"Visu elementu summa ir "<<sum<<" un videja vertiba ir "<<sum/8.0;


  return 0;
}
