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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        int cnt=-1;
        ListNode* start;
        ListNode* end;
        ListNode* join;
        while(temp->next!=nullptr)
        {
            cnt++;
            if(cnt==(a-1))
            {
                start=temp;
            }
            if(cnt==b)
            {
            end=temp;
             join=temp->next;   
            }
            temp=temp->next;
        }
        start->next=list2;
        end->next=nullptr;

        ListNode* temp1=list2;
        while(temp1->next!=nullptr)
        {
         temp1=temp1->next;   
        }
        temp1->next=join;
        return list1;


    }
};