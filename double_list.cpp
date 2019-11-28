#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct node{
int data;
node *next;
node *prev; 
};
class double_linked_list
{
private:
    node *head;
public:
    double_linked_list()
    {
        head = NULL;
    }

    void add_node(int n)
    {

        node *tmp = new node;
        node *s;
        tmp->data = n;
        tmp->next = NULL;
        if(head == NULL)
        {
            tmp->prev = NULL;
            head=tmp;
        }
        else
        {
        s = head;
        while (s->next != NULL)
            s = s->next;
        s->next = tmp;
        tmp->prev = s;
        }
    }
    node* get_head(){
        return head;
    }
    void display_list_reverse(node* head){
            if(head != NULL)
        {  
            display_list_reverse(head->next);
               cout << head->data <<"\n";
        }

    }
        void display(node* head){
            if(head != NULL)
        {  cout << head->data <<"\n";
            display(head->next);
               
        }
    }
    int skaitss(node* head, int skaits=0){
   while(head != NULL)
        {  skaits++;
            head=head->next;       
        }
            return skaits;
        }
    void front(int n)
{
    node *tmp = new node;
    tmp -> data = n;
    tmp -> next = head;
    head = tmp;
}
void insert_position(int pos, int n)
  {
    node *pre=new node;
    node *cur=new node;
    node *tmp=new node;
    cur=head;
    for(int i=0;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    tmp->data=n;
    pre->next=tmp;	
    tmp->next=cur;
  }
  void removeFirstNode() 
{ 
   node *tmp= new node;
    tmp=head;
    head=head->next;
    head->prev=NULL;
   free(tmp);
    } 

      void removeLastNode(){ 
     node *tmp= new node;
     node *ptmp= new node;

    tmp=head;
          while(tmp->next!=NULL){
              ptmp=tmp;
              tmp=tmp->next;
          }
          ptmp->next=NULL;
          free(tmp);
    } 
    void delete_position(int pos)
  {
    node *current=new node;
    node *previous=new node;
    node *tmp=new node;
    current=head;
    while(pos>0)
    {
      previous=current;
      current=current->next;
      pos--;
    }
    previous->next=current->next;
    tmp=current->next;
    tmp->prev=previous;
    free(current);
  }
  void find_value(){
      node *current=new node;
      current=head;
      int vert=current->data;
      while(current->next!=NULL){
          
          if(vert<current->data){
              vert=current->data;
          }
          current=current->next;
      }
        cout<<"Lielaka vertiba ir "<<vert<<"\n";
  }
};

int main(){
int skaits, elements, pos, izvele;
string yn;
double_linked_list a;
cout<<"Cik elementus ievadisiet saraksta?\n";
cin>>skaits;
cout<<"Ievadiet elementus\n";
while(skaits>0){
    cin>>elements;
a.add_node(elements);
skaits--;
}
do{
system("cls");

cout<<"1-Izvadit sarakstu apgriezta veida\n";
cout<<"2-Izvadit sarakstu\n";
cout<<"3-Izvadit elementu skaitu saraksta\n";
cout<<"4-Pievienot elementu saraksta sakuma\n";
cout<<"5-Pievieno elementu beigas\n";
cout<<"6-Pievienot elementu saraksta vidu\n";
cout<<"7-Izdzest saraksta pirmo mezglu\n";
cout<<"8-Izdzest saraksta pedejo mezglu\n";
cout<<"9-Izdzest mezglu no saraksta vidus\n";
cout<<"10-Atrast saraksta lielako vertibu\n";
cout<<"*Mezglu indeksacija sakas ar 0\n";
 cout<<"Saraksts ";
 a.display(a.get_head());
 cout<<"\n";
cin>>izvele;
switch(izvele) {
   case 1  : 
   cout<<"Apgriezts saraksts\n";
   a.display_list_reverse(a.get_head());
      break; 
   case 2  :
      cout<<"Saraksts\n";
      a.display(a.get_head());
      break; //optional
  case 3:
     cout<<"elementu skaits ir "<<a.skaitss(a.get_head())<<"\n";
  break;
  case 4:
    cout<<"Ievadiet vertibu\n";
    cin>>elements;
    a.front(elements);
    cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
   break;
   case 5:
    cout<<"Ievadiet vertibu\n";
    cin>>elements;
    a.add_node(elements);
     cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    break;
    case 6:
    cout<<"Kada pozicija pievienot?\n";
    cin>>pos;
    cout<<"Kada vertiba\n";
    cin>>elements;
    a.insert_position(pos,elements);
    cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    break;
    case 7:
        a.removeFirstNode();
         cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    break;
    case 8:
        a.removeLastNode();
         cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    break;
    case 9:
    cout<<"Kada pozicija izdzest?\n";
    cin>>pos;
    if(pos>=0 && pos<a.skaitss(a.get_head())){
        a.delete_position(pos);
         cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    }else{
        cout<<"Sada pozicija nevar izdzest\n";
    }
    break;
    case 10:
        a.find_value();
    break;
   default : //Optional
      cout<<"Sada izvele nepastav\n";
}
    cout<<"Vai velaties turpinat?[J]-ja/[N]-ne\n";
    cin>>yn;
    cout<<yn;
}while(yn =="J"||yn=="j");

return 0;
}
