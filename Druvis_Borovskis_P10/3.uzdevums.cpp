#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Ievadi menesa skaitli no 1 lidz 12"<<endl;
    cin >>a;
  switch(a){
  case 1: cout << "Janvaris"; break;
  case 2: cout << "Februaris"; break;
  case 3: cout << "Marts"; break;
  case 4: cout << "Aprilis"; break;
  case 5: cout << "Maijs"; break;
  case 6: cout << "Junijs"; break;
  case 7: cout << "Julijs"; break;
  case 8: cout << "Augusts" << endl; break;
  case 9: cout << "Septembris" << endl; break;
  case 10: cout << "Oktobris" << endl; break;
  case 11: cout << "Novembris" << endl; break;
  case 12: cout << "Decembris" << endl; break;
  default:cout<<"Tads menesis neeksiste";
  }
    return 0;
}
