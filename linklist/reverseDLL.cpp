// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
struct node{
    public:
  int data;
  node* next;
  node* prev;
  node(int d)
  {
      data=d;
      next=prev=nullptr;
  }
};
node* convertintoDLL(vector<int> &arr){
    node*  head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i]);
        temp->prev=mover;
        mover->next=temp;
        mover=temp;
        
    } return head;
}
void printLL(node* head)
{
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* reverseDLL(node* head)
{
    node* temp=head;
    node* last=NULL;
    while(temp!=nullptr)
    {
        last=temp->prev;
        temp->prev=temp->next;
        temp->next=last;
        temp=temp->prev;
    } return last->prev;
}
int main() {
  
   vector<int>arr={1,2,3,4,5,6};
   node* head=convertintoDLL(arr);
   node* newhead=reverseDLL(head);
   printLL(newhead);

}