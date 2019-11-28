#include <iostream>
using namespace std;

int main()
{
    int a,b,i;
    cout << "Ievadi 2 skaitlus"<<endl;
    cin >>a>>b;

    if(a%2!=0 &&a+1<=b){a++;};

    for(; a<=b; a+=2){
        cout<<a<<endl;
    }

    return 0;
}
