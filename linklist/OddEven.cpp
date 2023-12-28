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
node* OddEven(node* &head)
{
    node* temp=head;
    node* evenhead=head->nxt;
    node* odd=head;
    node* even=evenhead;
    while(even!=nullptr && even->nxt!=nullptr)
    {
        odd->nxt=odd->nxt->nxt;
        even->nxt=even->nxt->nxt;
        odd=odd->nxt;
        even=even->nxt;
    }
    odd->nxt=evenhead;
    return head;
}
int main()
{
    vector<int>arr={2,3,4,5,6};
    node* head=convertIntoLL(arr);
    cout<<"Before segragation"<<endl;
    printLL(head);
    node*newhead=OddEven(head);
     cout<<"After segragation"<<endl;
    printLL(newhead);
}