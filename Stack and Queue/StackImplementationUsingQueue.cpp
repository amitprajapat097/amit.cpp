// using of 2 queue 
// making push operation costly 
class MyStack {
    private:
    queue<int>q1;
       queue<int>q2; 
public:
    MyStack() {
       
    }
    
    void push(int x) {
        q1.push(x);
        while(!q2.empty())
        {
            int x=q2.front();
            q2.pop();
            q1.push(x);
        }
        swap(q1,q2);
    }
    
    int pop() {
        if(q2.empty())
        return 0;
        int x=q2.front();
        q2.pop();
        return x;
    }
    
    int top() {
      if(q2.empty())
        return 0;
        return q2.front();
    }
    
    bool empty() {
        if(q2.size()==0)return 1;
        else return 0;
    }
};

