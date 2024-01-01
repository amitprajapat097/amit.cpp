class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr)return head;
        if(head->next==nullptr) return nullptr;
        int n = 0;
        ListNode* temp = head;

        while (temp != nullptr ) {
            n++;
            temp = temp->next;
        }

        int mid = n / 2;
        temp = head;
        int cnt = 0;

        while (temp != nullptr && cnt < mid) {
            cnt++;
            if (cnt == mid) {
                ListNode* del = temp->next;
                temp->next = del->next;
                delete del;
               return head;
            }
            temp = temp->next;
        }

        return head;
    }
};



// better approach in O(n) time and O(1)
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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr) return nullptr;
        if(head->next->next==nullptr)
        {
           ListNode* temp=head;
              temp->next=nullptr;
              return head;
        }
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
         
        if (slow != nullptr && slow->next != nullptr) {
            slow->val = slow->next->val;
            ListNode* del = slow->next;
            slow->next = del->next;
            delete del;
        }

        return head;
    }
};
