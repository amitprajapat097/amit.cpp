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
        nxt=nullptr;
    }
};
node* convert(vector<int>&arr)
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
int search(node* head,int val)
{
    node*temp=head;
   
   while(temp)
   {
        if(temp->data==val) return 1;
        temp=temp->nxt;
   }return 0;
   
    
}
int main() {
   vector<int>arr={2,3,4,5};
   node*  head=convert(arr);
   int val=4;
//   cout<<head->nxt->data;
   node* temp=head;
//   while(temp)
//   {
//       cout<<temp->data<<" ";
//       temp=temp->nxt;
//   }
int ans=search(head,val);
cout<<ans;
}