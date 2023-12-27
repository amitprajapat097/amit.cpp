// insert trough a single function using position 


#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* nxt;
node(int data)
{
    this->data=data;
    this->nxt=NULL;
}

};
void insertnode(node* &head,int data,int position)
{
    // for head
    if(position==1)
    {
       node* temp  = new node(data);
    temp->nxt=head;
    head=temp; 
    }
   
   int cnt=0;
   node* ptr = head;
   while(ptr!=NULL)
   {
       ptr = ptr->nxt;
       cnt++;
       if(cnt== position- 1)
       {
           cout<<position;
           node* nodetoinsert = new node(data);
           nodetoinsert->nxt = ptr->nxt;
           ptr->nxt = nodetoinsert;
       }
   }
   
   
   
}
void print(node* &head)
{
   node* temp= head;
   
   while(temp!=NULL)
   {
    std::cout<<temp->data<<" ";
    temp = temp->nxt;
   }
   cout<<endl;
}
int main()
{
    node* head = new node(12);
    print(head);
    
    
    insertnode(head,23,1);
    insertnode(head,23,3);
    insertnode(head,23,1);
    print(head);

    return 0;
}
