//  two pointer approach
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode* t1=headA;
       ListNode* t2=headB;
       while(t1!=t2) 
       {
           t1=t1->next;
           t2=t2->next;

           if(t1==t2)
           {
               return t1;
           }

           if(t1==nullptr)t1=headB;
           if(t2==nullptr)t2=headA;

       }
       return t1;
    }
};

// length diference approach
class Solution {
public:
int getLength(ListNode * head)
{
    int l=0;
    if(head==nullptr)return 0;
    ListNode* temp=head;
    while(temp!=nullptr)
    {
        l++;
        temp=temp->next;
    } return l;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=getLength(headA);
        int lenB=getLength(headB);

        while(lenB>lenA)
        {
          lenB--;
          headB=headB->next;

        }

        while(lenA>lenB)
        {
            lenA--;
            headA=headA->next;
        }

        while(headA!=headB)
        {
            if(headA==headB) return headA;
            else
            {
                headA=headA->next;
                headB=headB->next;
            }
        }
        return headA;
    }
};