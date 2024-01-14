/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* merge(Node* list1,Node* list2)
{
	  Node* p1=list1;
      Node* p2=list2;
      Node* dumy=new Node(-1);
      Node* p3=dumy;

      while(p1!=nullptr  &&  p2!=nullptr)
      {
          if(p1->data < p2->data)
          {
            p3->child=p1;
            p1=p1->child;
          }
          else
          {
              p3->child=p2;
              p2=p2->child;
          }
          p3=p3->child;

      }

      if(p1!=nullptr)
      {
          p3->child=p1;
      }
      else
      {
          p3->child=p2;
      }
      return dumy->child;
    
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL || head->next==nullptr)
	return head;

	Node* mergehead=flattenLinkedList(head->next);
	return merge(mergehead,head);
}
