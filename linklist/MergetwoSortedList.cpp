// naive approach
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans;
        while(list1!=nullptr && list2!=nullptr)
        {
            if(list1->val<list2->val)
            {
              ans.push_back(list1->val);
              list1=list1->next;
            }
            else
            {
              ans.push_back(list2->val);
              list2=list2->next;
            }
        }
        while(list1!=nullptr)
        {
            ans.push_back(list1->val);
            list1=list1->next;

        }
        while(list2!=nullptr)
        {
            ans.push_back(list2->val);
             list2=list2->next;
        }

        ListNode* dump=new ListNode(-1);
        int n=ans.size();
         ListNode* temp=dump;
       for(int i=0;i<n;i++)
        {
          ListNode* newnode=new ListNode(ans[i]);
          temp->next=newnode;
          temp=temp->next;
        }
        return dump->next;

    }
};




//   Optimal approach
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* p1=list1;
      ListNode* p2=list2;
      ListNode* dumy=new ListNode(-1);
      ListNode* p3=dumy;

      while(p1!=nullptr  &&  p2!=nullptr)
      {
          if(p1->val < p2->val)
          {
            p3->next=p1;
            p1=p1->next;
          }
          else
          {
              p3->next=p2;
              p2=p2->next;
          }
          p3=p3->next;

      }

      if(p1!=nullptr)
      {
          p3->next=p1;
      }
      else
      {
          p3->next=p2;
      }
      return dumy->next;
    }
};