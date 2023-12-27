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
node* Inserthead(node* head,int val)
{
    node* temp=new node(val);
    temp->nxt=head;
    return temp;
}
node* InsertAtTail(node* head,int val)
{
    if(head==NULL)return new node(val);
    node* temp=head;
    while(temp->nxt!=NULL)
    {
        temp=temp->nxt;
    }
    node* add=new node(val);
    temp->nxt=add;
    return head;
}
node* InsertAtposition(node* head,int pos,int val)
{
    if(head==NULL) return new node(val);
    if(pos==1)
    {
     node* temp=new node(val);
    temp->nxt=head;
    return temp;
    }
    int cnt=0;
    node* temp=head;
    while(temp)
    {
        cnt++;
        if(cnt==pos-1)
        {
            node* add=new node(val);
            node* forward=temp->nxt;
            temp->nxt=add;
            add->nxt=forward;
        }
        temp=temp->nxt;
    }return head;
    
}
node* InsertBeforeValue(node* head,int val,int ele)
{
    if(head==NULL) return nullptr;
    if(head->data==val)
    {
        node* add=new node(ele);
        add->nxt=head;
        return add;
    }
    node* temp=head;
    while(temp->nxt!=NULL)
    {
        if(temp->nxt->data==val)
      {
        node* add=new node(ele);
        node* forward=temp->nxt;
        temp->nxt=add;
        add->nxt=forward;
        return head;
      }
      temp=temp->nxt;
    }return head;
    
}
int main() {
    vector<int>arr={2,3,4,5};
    node* head=convertIntoLL(arr);
    // int k=3;
    int val=3;
    int ele=1;
    // node* newhead=removeHead(head);
    // node*newhead=removeTail(head);
    // node* newhead=removeKelement(head,k);
    // node* newhead=removeNode(head,val);
    // node* newhead=Inserthead(head,val);
    // node* newhead=InsertAtTail(head,val);
    // node*newhead=InsertAtposition(head,pos,val);
    node* newhead=InsertBeforeValue(head,val,ele);
    head=newhead;
    
    // cout<<newhead->data;
    printLL(head);
// node anb=node(arr[0]);
// cout<<anb.data;
}

