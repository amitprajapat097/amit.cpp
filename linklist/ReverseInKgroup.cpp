/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* findKnode(ListNode* head,int k)
{
   ListNode* temp=head;
   while(temp!=nullptr)
   {
       k--;
       if(k==0)
       {
           return temp;
       }
       temp=temp->next;
   }
   return nullptr;
}
ListNode* reverse(ListNode* head)
{
  ListNode* temp=head;
  ListNode* prevnode=nullptr;
  while(temp!=nullptr)
  {
      ListNode* nextnode=temp->next;
      temp->next=prevnode;
      prevnode=temp;
      temp=nextnode;
  }
  return prevnode->next;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* temp=head;
       ListNode* prevnode;
       while(temp!=nullptr)
       {
         ListNode* Knode =findKnode(temp,k);
        
         if(Knode==NULL)
         {
             prevnode->next=temp;
             break;
         }
          ListNode* nextnode=Knode->next;
         Knode->next=nullptr;
         ListNode* newhead=reverse(temp);
         if(head==temp)
         {
             head=Knode;
         }
         else
         prevnode->next=Knode;
        //  Knode=temp;
         prevnode=temp;
        //  temp->next=nextnode;
        //  temp=temp->next;
        temp=nextnode;
       }
       return head;
    }
};