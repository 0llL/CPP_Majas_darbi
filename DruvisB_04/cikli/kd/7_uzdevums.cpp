#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std::this_thread;
using namespace std::chrono;
using namespace std;
//taisna horizontala linija
string line1(int a=9){
  string result="*";
    for(int i=0;i<a;i++){
      result+=" *";
    }
  return result;
}
//vertikalas linijas
string line2(int a=17){
  string result="*";
    for(int i=0; i<a;i++){
      result+=" ";
    }
    result+="*";
  return result;
}

//tristura izveides funkcija
void trist(int izvele, string step){
  int k;
    for(int t=1;t<=izvele;t++){
      k=5;
      for(int i=0;i<5;i++){
        cout<<step;
        for (int j=0;j<10;j++){
          if(j==k || j==10-k){
            cout<<"*";
          }else{
            cout<<" ";
          }
        }
        k--;
        cout<<"\n";
      }
      cout<<step<<line1(5)<<"\n";
    }
}

//tainssturia izveides funkcija
void taisnsturis(int izvele, string step, string line_2, string line){
    for(int t=1;t<=izvele;t++){
      cout<<step<<line<<"\n";
      for(int i=0; i<5;i++){
        cout<<step<<line_2<<"\n";
      }
      cout<<step<<line;
    }
}
//cetrusturia izveides funkcija
void cetrusturis(int izvele, string step, string line_2, string line){
    for(int t=1;t<=izvele;t++){
      cout <<step<<line<<"\n";
      for(int i=0; i<8;i++){
        cout<<step<<line_2<<"\n";
      }
      cout <<step<<line<<"\n";
    }
}

void menu(){
    cout<<"Menu\n"
    <<"1-cetrusturis\n"
    <<"2-tristuris\n"
    <<"3-tainssturis\n";
}
//animacijas funkcija
void animation(int &time){
  int step=1;
    sleep_for(seconds(step));
    system("clear");
    menu();
    time-=step;
}


int main(){
  int izvele=1;
  string line,line_2,step="";
  int time=10;
  int izv=1;
  line=line1();
  line_2=line2();
    menu();
    cin>>izv;

  switch(izv){

    case 1:
      cout<<"cik reizu paradit izveleto figuru?\n";
      cin>>izvele;
      while(time>0){
        animation(time);
        cetrusturis(izvele, step,line_2, line);
        step+=" ";
      }
    break;

    case 2:
      cout<<"cik reizu paradit izveleto figuru?\n";
      cin>>izvele;
      while(time>0){
          animation(time);
          trist(izvele,step);
          step+=" ";
      }
    break;

    case 3:
      cout<<"cik reizu paradit izveleto figuru?\n";
      cin>>izvele;
      while(time>0){
        animation(time);
        taisnsturis(izvele, step,line_2, line);
        step+=" ";
      }
    break;
  }
  return 0;
}

