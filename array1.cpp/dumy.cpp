#include<iostream>
using namespace std;
class node{
  
  public:
   int data;
   node* nxt;

   node(int d){

    this -> data = d;
    this -> nxt =NULL;
   }

};

// void insertion_at_head(node* &head, int d){

//  node* temp = new node(d);
//  temp -> nxt = head;
//  head = temp;
 
// }


void insertion_at_end(node* &lst, int d){

 node* temp = new node(d);
 lst -> nxt = temp;
 lst = lst -> nxt ;
 

void print(node* &lst){
  node* temp = lst;
    
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->nxt;
    }
    cout<<endl;
}

int main()
{
  node* node1=new node(12);
  node* lst = node1;
   
  print(lst) ;

  // insertion_at_head(head,13)  ;
  // print(head);

  // insertion_at_head(head,14)  ;
  // print(
insertion_at_end(lst,13)  ;
  print(lst);

insertion_at_end(lst,13)  ;
  print(lst);


}