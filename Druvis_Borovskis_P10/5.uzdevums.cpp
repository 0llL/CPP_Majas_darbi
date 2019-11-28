#include <iostream>
using namespace std;

int main()
{
    int a;
    string i;
    do {
    cout << "Ievadi skaitli"<<endl;
    cin >>a;
  while(a>0){
        if((a-(a/10)*10)%2==1) {
    cout << a-(a/10)*10<<" ";
        }
    a=a/10;
  }
  cout<<endl;
  cout <<"Ja, velies izpildit doto programmu atkartoti ievadi [J],ja ne tad jebko citu"<<endl;
  cin >>i;
    }
    while(i=="J"||i=="j");





    return 0;
}
