// Online C++ compiler to run C++ program online
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
    }
}
node* removeHead(node* head)
{
    node* temp=head;
    head=head->nxt;
    free(temp);
    return head;
}
node* removeTail(node* head)
{
    node* temp=head;
    while(temp->nxt->nxt!=NULL)
    {
        temp=temp->nxt;
    }
    node* del=temp->nxt;
    temp->nxt=NULL;
    free(del);
    return head;
}
node* removeKelement(node* head,int k)
{
    if(head==NULL) return head;
    if(k==1)
    {
        node* temp=head;
        head=head->nxt;
        free(temp);
        return head;
        
    }
    int cnt=0;
    node* temp=head;
    node* prev=NULL;
    while(temp)
    {
        cnt++;
        if(cnt==k)
        {
            prev->nxt=temp->nxt;
            free(temp);
            
        }
        prev=temp;
        temp=temp->nxt;
    }    return head;
}
node* removeNode(node* head,int val)
{
   if(head==NULL)return head;
    if(head->data==val)
    {
        node* temp=head;
        head=head->nxt;
        free(temp);
        return head;
    }
    node* temp=head;
    node* prev=NULL;
    while(temp)
    {
        if(temp->data==val)
        {
            prev->nxt=temp->nxt;
            free(temp);
        }
        prev=temp;
        temp=temp->nxt;
        
    } return head;
}
int main() {
    vector<int>arr={2,3,4,5};
    node* head=convertIntoLL(arr);
    // int k=3;
    int val=12;
    // node* newhead=removeHead(head);
    // node*newhead=removeTail(head);
    // node* newhead=removeKelement(head,k);
    node* newhead=removeNode(head,val);
    head=newhead;
    
    // cout<<newhead->data;
    printLL(head);
// node anb=node(arr[0]);
// cout<<anb.data;
}



