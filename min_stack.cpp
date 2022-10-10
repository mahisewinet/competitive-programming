class MinStack {
public:
    stack<int> s;
    stack<int> s1;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(s1.empty() || val<=s1.top())
            s1.push(val);
    }
    
    void pop() {
       
        if(!s1.empty() && !s.empty() && s.top() == s1.top())
            s1.pop();
        s.pop();                
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s1.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
