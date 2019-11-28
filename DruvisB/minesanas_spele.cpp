#include <iostream>
#include <cstdlib>
 using namespace std;
 int main(){
   int x,y;
   string i;
   do{
   x = rand() % 100;
   cout <<"Sveiki! Ludzu ievadiet skaitli"<<endl;
   cin >>y;
   while(y!=x){
     (y>x)?cout<<"Skaitlis ir mazaks"<<endl:cout<<"Skaitlis ir lielaks"<<endl;
     cout <<"Ievadiet skaitli"<<endl;
     cin >>y;
   }
   cout<<"Apsveicu, pareizi"<<endl;

 cout <<"Ja, velies izpildit doto programmu atkartoti ievadi [J],ja ne tad jebko citu"<<endl;
  cin >>i;
    }
    while(i=="J"||i=="j");
   return 0;
 }
