// naive approach with se of hash map

class Solution {
public:
    Node* copyRandomList(Node* head) {
      if (!head) {
            return nullptr;
        }
        map<Node*,Node*>mp;
        Node* temp=head;
        // Node* dummy=new Node(-1);
        
        while(temp)
        {
            mp[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        Node* newhead=mp[temp];
        while(temp)
        {
            mp[temp]->next=mp[temp->next];
            mp[temp]->random=mp[temp->random];
            temp=temp->next;
            
        }
        return newhead;
    }
};

// Better approach without hashmap 