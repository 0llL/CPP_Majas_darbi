#include <iostream>

using namespace std;
//--------ATRAS KARTOSANAS ALGORITMS-----

// maina elementus vietam


/*Pedejais elements tiek panemts ka atslegas elements,mazaki
elementi tiek kartoti pa kreisi,lielaki pa labi */
int segments(int arr[], int l, int r){
  int temp;
  int atslega = arr[r];
  int i = (l - 1); // mazaka elementa indeks

    for (int j = l; j <= r - 1; j++){
       //ja izmantojamais elements ir mazaks ka atslega ,veic so darbibu
       if (arr[j] <= atslega){
          i++;
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
  temp=arr[i+1];
  arr[i+1]=arr[r];
  arr[r]=temp;
  return (i + 1);
}

/*  l- sakuma indeks
r- beigu indeks
*/
void quickSort(int arr[], int l, int r){
  if (l < r){
      //pi ir segmenta indeks
      int pi = segments(arr, l, r);
      // Atseviski karto pirms un pec segment
      quickSort(arr, l, pi - 1);
      quickSort(arr, pi + 1, r);
  }
}



int main(){
int arr[10]={};

for (int i=0; i<10; i++){
  cout<<"Ievadiet skaitli, iespejamas vertibas: 0, 1, 2\n";
  cin>>arr[i];
  while(arr[i]!=0 && arr[i]!=1 && arr[i]!=2){
    cout<<"Skaitlis neatbilst iespejamam vertibam, velreiz ievadiet skaitli, iespejamas vertibas: 0, 1, 2\n";
    cin>>arr[i];
  }
}
cout<<"\n";
for (int i=0; i<10; i++){

  cout<<"arr["<<i<<"]= "<<arr[i]<<", ";
}
//Izmanto atras kartosanas algoritmu
quickSort(arr, 0,9);

cout<<"\n\n";

for (int i=0; i<10; i++){

  cout<<"arr["<<i<<"]= "<<arr[i]<<", ";
}
  return 0;
}

