class MyStack {
public:
queue<int>q1;
    MyStack() {
        
        // queue<int>q2;

    }
    
    void push(int x) {
        int s=q1.size();
        q1.push(x);
        for(int i=0;i<s;i++)
        {
          q1.push(q1.front());
           q1.pop();
        }
    }
    
    int pop() {
   int n=q1.front();
   q1.pop();
   return n;
        
    }
    
    int top() {
        int n=q1.front();
        return n;
    }
    
    bool empty() {
        if(!q1.size())
        return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */