#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct node{
int data;
node *next;
};
int counter=0;
class circular_linked_list
{
private:
    node *head,*s;
public:
    circular_linked_list()
    {
        head = NULL;
    }

    void add_node(int n)
    {
        counter++;
        node *tmp = new node;
        tmp->data = n;
        tmp->next =head;
        if(head == NULL)
        {
            head = tmp;
            s = tmp;
        }
        else
        {
            s->next = tmp;
            s = s->next;
        }

    }
    node* get_head(){
        return head;
    }

        void display(node* head){
            node *s;
            s=head;
          for(int i=0;i<counter;i++)
        { cout<<s->data<<"\n";
        s=s->next;             
        }
    }

    void front(int n)
{
    node *tmp = new node;
    node *s;
    tmp -> data = n;
    tmp -> next = head;
    head = tmp;
    s=head;
        for(int i=1;i<counter+1;i++)
    {s=s->next;  
    }
    s->next=head;
    counter++;
}
void insert_position(int pos, int n)
  {
    node *pre=new node;
    node *cur=new node;
    node *tmp=new node;
    cur=head;
    for(int i=1;i<pos;i++)
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
        s=head;
    for(int i=1;i<counter-1;i++)
    {s=s->next;  
    }
    s->next=head;
   free(tmp);
    } 

      void removeLastNode(){ 
     node *tmp= new node;
     node *ptmp= new node;

    tmp=head;
          for(int i=0;i<counter;i++){
              ptmp=tmp;
              tmp=tmp->next;
          }
          ptmp->next=head;
          free(tmp);
    } 
    void delete_position(int pos)
  {
    node *current=new node;
    node *previous=new node;
    current=head;
    while(pos>0)
    {
      previous=current;
      current=current->next;
      pos--;
    }
    previous->next=current->next;
    free(current);
  }
  void find_value(int n){
      node *current=new node;
      current=head;
      int rez=0;
      while(current->next!=NULL &&current->data!=n){
          rez++;
          current=current->next;
      }
      if(current->data==n){
          cout<<rez<<" mezgls satur prasito "<<n<<" vertibu\n";
      }else{
          cout<<"cikls nesatur sadu vertibu\n";
      }
      
  }
};

int main(){
int skaits, elements, pos, izvele;
string yn;
circular_linked_list a;
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


cout<<"1-Izvadit sarakstu\n";
cout<<"2-Pievienot elementu saraksta sakuma\n";
cout<<"3-Pievieno elementu beigas\n";
cout<<"4-Pievienot elementu saraksta vidu\n";
cout<<"5-Izdzest saraksta pirmo mezglu\n";
cout<<"6-Izdzest saraksta pedejo mezglu\n";
cout<<"7-Izdzest mezglu no saraksta vidus\n";
cout<<"8-Atrast saraksta prasito vertibu\n";
cout<<"*Mezglu indeksacija sakas ar 0\n";
 cout<<"Saraksts ";
 a.display(a.get_head());
 cout<<"\n";
cin>>izvele;
switch(izvele) {
   case 1  :
      cout<<"Saraksts\n";
      a.display(a.get_head());
      break; //optional
  case 2:
    cout<<"Ievadiet vertibu\n";
    cin>>elements;
    a.front(elements);
    cout<<"Veiksmigi izpildits\n";
   break;
   case 3:
    cout<<"Ievadiet vertibu\n";
    cin>>elements;
    a.add_node(elements);
    cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    break;
    case 4:
    cout<<"Kada pozicija pievienot?\n";
    cin>>pos;
    cout<<"Kada vertiba\n";
    cin>>elements;
    a.insert_position(pos,elements);
    cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    break;
    case 5:
        a.removeFirstNode();
       cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    break;
    case 6:
        a.removeLastNode();
        cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    break;
    case 7:
    cout<<"Kada pozicija izdzest?\n";
    cin>>pos;
    if(pos>=0 ){
        a.delete_position(pos);
        cout<<"\nSaraksts  ";
     a.display(a.get_head());
    cout<<"\nVeiksmigi izpildits\n";
    }else{
        cout<<"Sada pozicija nevar izdzest\n";
    }
    break;
    case 8:
        cout<<"Kadu vertibu atrast?\n";
        cin>>elements;
        a.find_value(elements);
    break;
   default : 
      cout<<"Sada izvele nepastav\n";
}
    cout<<"Vai velaties turpinat?[J]-ja/[N]-ne\n";
    cin>>yn;
    cout<<yn;
}while(yn =="J"||yn=="j");

return 0;
}
