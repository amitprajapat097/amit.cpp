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