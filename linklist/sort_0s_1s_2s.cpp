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
node* sort0_1_2s(node* head)
{
    if(head==NULL || head->nxt==NULL)return head;
    node* temp=head;
    node* zerohead=new node(-1);
    node* zero=zerohead;
    node* onehead=new node(-1);
    node* twohead=new node(-1);
     node* two=twohead;
    node* one=onehead;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            zero->nxt=temp;
            zero=temp;
        }
        else if(temp->data==1)
        {
            one->nxt=temp;
            one=temp;
        }
        else
        {
            two->nxt=temp;
            two=temp;
        }
        
        temp=temp->nxt;
    }
    if(onehead->nxt)
    zero->nxt=onehead->nxt;
    else zero->nxt=twohead->nxt;
    
    
    one->nxt=twohead->nxt;
    two->nxt=nullptr;
    node* newhead=(zerohead->nxt);
    delete onehead;
    delete zerohead;
    delete twohead;
    
    return newhead;
    
}

int main()
{
    vector<int>arr={2,1,2,1,2,1,0,0,0,1};
    node* head=convertIntoLL(arr);
    cout<<"Before sorting"<<endl;
    printLL(head);
    node* newhead=sort0_1_2s(head);
    cout<<"After sorting"<<endl;
    printLL(newhead);
}