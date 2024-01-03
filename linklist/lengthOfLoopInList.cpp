/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
int getlength(Node* fast,Node* slow)
{
    int cnt=1;
    fast=fast->next;
    while(fast!=slow)
    {
        cnt++;
        fast=fast->next;
    }return cnt;
}
int lengthOfLoop(Node *head) {
    // Write your code here
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr)
    {
        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast)
        {
            return getlength(fast,slow);
        }
    }return 0;
}
