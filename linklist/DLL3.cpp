// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<vector>
struct node{
    public:
    int data;
    node* nxt;
    node* back;
    
    public:
    node(int d)
    {
        data=d;
        nxt=nullptr;
        back=nullptr;
    }
    node(int d,node* next,node* prev)
    {
        data=d;
        nxt=next;
        
    }
};
node* convertIntoDLL(vector<int> arr)
{
    node* head = new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node*  temp=new node(arr[i]);
        mover->nxt=temp;
        temp->back=mover;
        mover=temp;
        
    } return head;
    
}
void  PrintLL(node* &head)
{
    node* mover = head;
    while(mover)
    {
        cout<<mover->data<< " ";
        mover=mover->nxt;
    }
}
node* deleteHead(node* head)
{
    if(head==NULL || head->nxt == NULL )return NULL;
    node* temp=head;
    head=head->nxt;
    head->back=nullptr;
    temp->nxt=nullptr;
    delete temp;
    return head;
    
}
// node* deleteTail(node* head)
// {
//     if(head==NULL || head->nxt == NULL) return NULL;
//     node* temp=head;
//     while(temp->nxt!=NULL)
//     {
//         temp=temp->nxt;
//     }
//     node* prev=temp->back;
//     prev->nxt=nullptr;
//     temp->back=nullptr;
//     delete temp;
//     return head;
   
// }
node* deleteTail(node* head)
{
    if (head == nullptr || head->nxt == nullptr)
        return nullptr;

    node* temp = head;
    while (temp->nxt != nullptr)
    {
        temp = temp->nxt;
    }

    // Check if there is only one element in the list
    if (temp->back == nullptr)
    {
        delete temp;
        return nullptr;
    }

    node* prev = temp->back;
    prev->nxt = nullptr;
    temp->back = nullptr;
    delete temp;

    return head;
}
node* removeKelement(node* head,int k)
{
    if(head==NULL)
    return NULL;
    node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->nxt;
    }
    node* prev=temp->back;
    node* front=temp->nxt;
    if(front==nullptr)
    {
        deleteTail(head);
    }
    else if(prev==nullptr)
    {
        deleteHead(head);
    }
    else if(prev==nullptr || front==nullptr)
    {
        return nullptr;
    }
    prev->nxt=front;
    front->back=prev;
    temp->back=temp->nxt=nullptr;
    delete temp;
    return head;
}
void removeNode(node* temp)
{
    node* prev=temp->back;
    node* front=temp->nxt;
    prev->nxt=front;
    front->back=prev;
    temp->back=temp->nxt=nullptr;
    delete temp;
    // return head;
}
node* InsertbeforeHead(node* head,int data)
{
    node*  temp=head;
    node* newhead=new node(data);
    temp->back=newhead;
    newhead->nxt=temp;
    // head=newhead;
    return newhead;
}
node* InsertAfterhead(node* head,int data)
{
    node* prev=head;
    node* newhead=new node(data);
    node* front=head->nxt;
    prev->nxt=newhead;
    front->back=newhead;
    newhead->back=prev;
    newhead->nxt=front;
    return head;
    
}
node* InsertAfterTail(node* head,int data)
{
    node* newnode=new node(data);
    node* temp=head;
    while(temp->nxt!=NULL)
    {
        temp=temp->nxt;
    }
    temp->nxt=newnode;
    newnode->back=temp;
    return head;
    
}
node* InsertBeforeTail(node* head,int data)
{
    node* newnode=new node(data);
    node* temp=head;
     
    while(temp->nxt!=NULL)
    {
        temp=temp->nxt;
    }
    node* prev=temp->back;
    temp->back=newnode;
    prev->nxt=newnode;
    newnode->back=prev;
    newnode->nxt=temp;
    return head;
    
}
node* InsertBeforeKnode(node* head,int k,int data)
{
   
    node* temp=head;
    int cnt=0;
    if(k==0)return head;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->nxt;
    }
    node* prev=temp->back;
    // cout<<temp->data<<endl;
    if(prev==NULL)
    {
        node* newnode=new node(data);
        newnode->nxt=temp;
        temp->back=newnode;
        head=newnode;
        return head;
    }
    node* newnode=new node(data);
    prev->nxt=newnode;
    newnode->nxt=temp;
    temp->back=newnode;
    newnode->back=prev;
    // head=newnode;
    return head;
}
int main()
{
   vector<int>arr={1,2,3,4};
   node* head=convertIntoDLL(arr);
//   node* newhead=deleteHead(head);
// node* newhead=deleteTail(head);
// node* newhead=removeKelement(head,3);
// node* newhead=removeNode(head->nxt);
// node* newhead=InsertbeforeHead(head,4);
// node* newhead=InsertAfterhead(head,4);
// node* newhead=InsertAfterTail(head,5);
// node* newhead=InsertBeforeTail(head,5);
node* newhead=InsertBeforeKnode(head,4,5);
   PrintLL(newhead);
   
}