// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Queue
{
 
  int *arr;
  int size;
  int rear;
  int front;
  int cnt;
  Queue(int size)
  {
      this->size=size;
      arr=new int[size];
      front=-1;
      rear=-1;
      cnt=0;
  }
  ~Queue() {
        delete[] arr;
    }
  bool isEmpty()
  {
      return cnt==0;

  }

       void push(int x)
       {
           if(cnt==size)
           {
               cout<<"Queue is full:"<<endl;
               return;
           }
           arr[rear%size]=x;
           rear++;
           cnt++;
           
       }
       
       void pop()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return;
    }
    arr[front % size] = -1;
    front++;
    cnt--;
}

       int top()
       {
           if(isEmpty())
           {
               cout<<"Queue is empty:"<<endl;
               return -1;
           }
           return arr[front%size];
           
       }
 void display() {
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
            return;
        }
        
        cout << "Queue Elements: ";
        
        for (int i = front; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
   };
int main() {
  Queue q(5);
    q.push(1);
    q.push(2);
    q.push(1);
    q.push(2);
    q.push(1);
    // q.push(2);
    q.display();
    // cout<<q.top()<<endl;
    q.pop();
    q.push(1);
    q.display();
    //  cout<<q.top();
    // q.display();
     
      
}