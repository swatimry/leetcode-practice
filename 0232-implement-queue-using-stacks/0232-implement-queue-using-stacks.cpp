class MyQueue {
public:
   stack<int> s1;
   stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty()){
            return -1;
        }
        while(!s1.empty()){
           int x=s1.top();
           s2.push(x);
           s1.pop();
        }
        int t=s2.top();
        s2.pop();
        while(!s2.empty()){
           int x=s2.top();
           s1.push(x);
           s2.pop();
        }
        return t;

    }
    
    int peek() {
         if(s1.empty()){
            return -1;
        }
        while(!s1.empty()){
           int x=s1.top();
           s2.push(x);
           s1.pop();
        }
        int t=s2.top();
        
        while(!s2.empty()){
           int x=s2.top();
           s1.push(x);
           s2.pop();
        }
        return t;
    }
    
    bool empty() {
        return s1.empty();
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