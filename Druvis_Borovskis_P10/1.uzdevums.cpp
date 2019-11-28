#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Ievadi 2 skaitlus"<<endl;
    cin >>a>>b;
    (a+b)%3?cout<<"Skaitlu summa nedalas":cout<<"Skaitlu summa dalas";
    return 0;
}
