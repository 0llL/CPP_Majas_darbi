#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Ievadi skaitli"<<endl;
    cin >>a;
    (a>=-5 && a<=5)?cout<<"Skaitlis atrodas intervala no -5 lidz 5, ieskaitot galapunktus":cout<<"Skaitlis neatrodas intervala no -5 lidz 5, ieskaitot galapunktus";
    return 0;
}
