class MyQueue {
public:
stack<int>st1;
stack<int>st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        int n1=st1.size();
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
          st1.push(x);
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
            cout<<st1.top()<<endl;;
        }

      
    }
    
    int pop() {
        if(st1.empty())
        {
            return -1;
        }
        int x=st1.top();
        st1.pop();
        return x;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */