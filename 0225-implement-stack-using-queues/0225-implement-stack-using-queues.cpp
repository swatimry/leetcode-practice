class MyStack {
    
public:
 queue<int> q1;
        queue<int> q2;
    MyStack() {
       
    }
    
    void push(int x) {
        q1.push(x);
       
    }
    
    int pop() {
        if(q1.size()==0){
            return -1;
        }
        while(q1.size()!=1){
            int temp=q1.front();
            q1.pop();
            q2.push(temp);
        }
        int t=q1.front();
        q1.pop();
        while(q2.empty()!=true){
            int temp=q2.front();
            q2.pop();
            q1.push(temp);
        }
        return t;
    }
    
    int top() {
      if(!q1.empty()){
          return q1.back();
      }  
      return -1;
    }
    
    bool empty() {
       return q1.empty();
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