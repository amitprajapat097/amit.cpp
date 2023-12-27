#include <iostream>
struct Qnode
{
    int data;
    Qnode* next;
    Qnode(int x){
        data=x;
        next=NULL;
    }
   
};

struct Queue
{
    Qnode* front ,rare;
    Queue()
    {
        front = rare = NULL;
    }
    void EnQueue(int x)
    {
        Qnode* temp = new Qnode(x);
        if(rare == NULL)
        {
            front = rare = temp;
            return;
        }
       
        rare->next=temp;
        rare = temp;
    }
   
    void Dequeue()
    {
       if(front==NULL)
       {
        return;
       }
       Qnode* temp=front;
       front = front ->next;
       if(front==NULL)
       {
        rare=NULL:
       }
       delete (temp);
        // // If queue is empty, return NULL.
        // if (front == NULL)
        //     return;
 
        // // Store previous front and
        // // move front one node ahead
        // QNode* temp = front;
        // front = front->next;
 
        // // If front becomes NULL, then
        // // change rear also as NULL
        // if (front == NULL)
        //     rear = NULL;
 
        // delete (temp);
    }
};
int main()
 {
    // Write C++ code here
    std::cout << "Hello world!";

    return 0;
}

