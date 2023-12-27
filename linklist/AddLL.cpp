#include <iostream>
#include<vector>
using namespace std;
struct node{
    public:
    int data;
    node* nxt;
    node(int d)
    {
        data=d;
        nxt=NULL;
    }
};
node* convertIntoLL(vector<int>& arr)
{
     if (arr.empty()) {
        return nullptr; // Return nullptr for an empty array
    }
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i]);
        mover->nxt=temp;
        mover=temp;
    }return head;
    
}
void printLL(node* head)
{
    node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->nxt;
    }cout<<endl;
}
node* addLL(node* & head1,node* & head2)
{
    node* temp1=head1;
    node* temp2=head2;
    node* dumy=new node(-1);
    node* curr=dumy;
    int carry=0;
    int sum=0;
    
    while(temp1!=NULL || temp2!=NULL)
    {
        sum=carry;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;
        
        node* newnode=new node(sum%10);
        carry=sum/10;
        curr->nxt=newnode;
        curr=newnode;
        
        if(temp1)temp1=temp1->nxt;
        if(temp2)temp2=temp2->nxt;
    }
    if(carry)
    {
        node* lastnode = new node(carry);
    curr->nxt=lastnode;
    }
    return (dumy->nxt);
}
int main()
{
    vector<int>arr1={3,5};
    vector<int>arr2={4,5,9,9};
    node* head1=convertIntoLL(arr1);
    node* head2=convertIntoLL(arr2);
    printLL(head1);
    printLL(head2);
    node* newhead=addLL(head1,head2);
    printLL(newhead);
    
}