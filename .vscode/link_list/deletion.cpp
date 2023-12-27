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
~node()
{
    int value = this-> data;

    //memory free
    if(this->nxt)
    {
        delete nxt;
        this->nxt = NULL;
    }
}

};
void insertionathead(int data,node* &head)
{
    
    node* temp  = new node(data);
    temp->nxt=head;
    head=temp;
}
void deletion(int position,node* &head)
{
    node* curr = head;
    node* prev = NULL;
    int cnt = 1;

    if(position==1)
    {
        node* temp = head;
        head = head->nxt;

        //mwemoery free
        temp->nxt = NULL;
        delete temp;
    }
    while(cnt<position)
    {
        prev = curr;
        curr = curr->nxt;
        cnt++;
    }
    prev->nxt = curr->nxt;
    curr->nxt=NULL;
    delete curr;
}
void print(node* &head)
{
   node* temp= head;
   
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp = temp->nxt;
   }
   cout<<endl;
}
 int main()
 {
    node* head = new node(12);
    print(head);
    insertionathead(2,head);
    print(head);
    deletion(1,head);
    print(head);

 }
