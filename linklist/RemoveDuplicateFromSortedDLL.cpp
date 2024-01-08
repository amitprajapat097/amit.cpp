// time complexity is O(n):

Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node* temp=head;
    while(temp!=nullptr && temp->next!=nullptr)
    {
        Node* nextnode=temp->next;
        while(nextnode!=nullptr && nextnode->data==temp->data)
        {
            nextnode=nextnode->next;
        }
        if(nextnode)nextnode->prev=temp;
        temp->next=nextnode;
        temp=nextnode;
    }
    return head;
}