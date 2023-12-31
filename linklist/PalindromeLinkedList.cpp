// brute force  approach
// time complexity = O(n2)
// Space complexity = O(n)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
      ListNode* temp=head;
        stack<int>st;
        while(temp!=nullptr)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr)
        {
            if(temp->val != st.top())
            {
                return false;
            }
            st.pop();
            temp=temp->next;
        }
        return true;
    }
};


// optimal approach
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* front = nullptr;
        while (curr != nullptr) {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) {
            return true; // An empty list or a list with a single element is a palindrome
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* reversedSecondHalf = reverse(slow->next);
        ListNode* first = head;
        ListNode* second = reversedSecondHalf;

        while (second != nullptr) {
            if (first->val != second->val) {
                // List is not a palindrome
                return false;
            }
            second = second->next;
            first = first->next;
        }

        // If we reach here, the list is a palindrome
        return true;
    }
};

