// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Stack
{
  int * arr;
  int top;
  int size;
  
  Stack(int size)
  {
      this->size=size;
      arr=new int[size];
      top=-1;
  }
  ~Stack()
  {
      delete[]arr;
  }
  int gettop()
  {
      if(top==-1) 
      cout<<"Stack is Empty:"<<endl;
      
      return arr[top];
  }
  bool isempty()
  {
      return top==-1;
  }
  int getsize()
  {
      return top+1;
  }
  int pop()
  {
      if(isempty())return -1;
      return arr[top];
      top--;
  }
  void push(int x)
  {
      if(top==size-1)
      {
          cout<<"stack full:"<<endl;
          return;
      }
      top++;
      arr[top]=x;
  }
  void display()
  {
      if(top==-1)
      {
          cout<<"Satck is empty:"<<endl;
          return;
      }
      
      int i;
      cout<<"Stack elements:";
      for(i=0;i<=top;i++)
      {
          cout<<arr[i]<<" ";
      }cout<<endl;
  }
  
};
int main() {
    Stack s(5);
    s.push(1);
    s.push(2);
     s.push(1);
    s.push(2);
     s.push(1);
     s.display();
     
}