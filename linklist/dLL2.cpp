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


int main()
{
   vector<int>arr={1,2,3,4};
   node* head=convertIntoDLL(arr);
//   node* newhead=deleteHead(head);
node* newhead=deleteTail(head);
   PrintLL(newhead);
   
}