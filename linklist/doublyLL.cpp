#include <iostream>
#include<vector>
using namespace std;
struct node{
    public:
    int data;
    node* nxt;
    node* back;
    node(int d)
    {
        data=d;
        nxt=nullptr;
        back=nullptr;
    }

    public:
    node(int d,node* nxt1,node* back1)
    {
        data=d;
        nxt=nxt1;
        back=back1;
    }
};
node* convert(vector<int>&arr)
{
    node* head=new node(arr[0]);
    node* prev =head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i]);
        prev->nxt=temp;
        temp->back=prev;
        prev=temp;
    }return head;
}
void printLL(node* head)
{
    node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->nxt;
    }
    node* backward=temp->back;
    while(backward)
    {
        cout<<backward->data<<" ";
        backward=backward->back;
    }
}
int main()
{

   vector<int>arr={2,3,4,5};
   node*  head=convert(arr);
   printLL(head);
}

