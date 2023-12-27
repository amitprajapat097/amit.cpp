#include<iostream>
using namespace std;
class node{

    public:
    
    int data;
    node* next;
    node(int data){
        this -> data=data;
        this->next=NULL;
    }
};


void insertathead(node* &head, int d){

  //new node create
  node* temp = new node(d);
  temp -> next = head;
  head = temp;
}

void insertatposition(node* &head,node*&tail,int position,int d)
{

  //if element at first position 
  if(position==1)
  {
    insertathead(head,d);
    return;
  }

  node* temp = head;
  int cnt=1; 
  
  while(cnt<position-1)
  {
    temp=temp->next;
    cnt++;
  }


  //insertion at tail 
  if(temp->next=NULL)
  {
    insertattail(tail,d);
    return; 
    
  }
   


  //create a node
  node* nodetoinsert = new node(d);
  nodetoinsert->next = temp->next;
  temp->next = nodetoinsert;
}


void insertattail(node* &tail, int d){

  //new node create
  node* temp = new node(d);
  tail -> next = temp;
  tail = temp;
}


void print(node* &head){
  node* temp=head;
  
  while(temp != NULL){
    cout<< temp -> data <<" ";
    temp = temp-> next;
  }
  cout<<endl;
}


int main(){
    node* node1 = new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

//head pointed to node1
node* head=node1;
// print(head);

node* tail = node1;
print(head);

insertattail(tail,12);


print(head);

insertattail(tail,15);
print(head);

insertattail(tail,18);
print(head);

insertattail(tail,19);
print(head);

insertatposition(head,tail,1,20);
print(head);

// insertathead(tail,15);
// print(head);
    // return 0;
}