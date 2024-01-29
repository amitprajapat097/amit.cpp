#include<iostream>
using namespace std;
#include<vector>
class Node{
    public:
    int val;
    Node* next;
    node(int v)
    {
        val=v;
        next=nullptr;
    }
};
Node* intoList(vector<int>nums)
{
    Node* head=new Node(nums[0]);
    Node* temp=head;
    for(int i=1;i<nums.size();i++)
    {
       Node newnode=new Node(nums[i]);
       temp->next=newnode;
       temp=temp->next;

    }return temp;
}
void printLL(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    vector<int>nums={2,3,4,5,6};
    Node*temp=intoList(nums);
    pritLL(temp);
}