class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (n == 1 && head->next == nullptr) {
            return nullptr;
        }

        int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        int r = cnt - n;
        if(r==0) 
        {
            ListNode* del=head;
            ListNode* newhead=head->next;
            delete del;
            return newhead;

        }
        int count = 0;
        temp = head;
        while (temp != nullptr) {
            count++;
            if (count == r) {
                ListNode* del = temp->next;
                temp->next = del->next;
                delete del;
            }
            temp = temp->next;
        }

        return head;
    }
};
