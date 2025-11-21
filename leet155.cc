class MinStack {
public:
    stack<int>value;
    stack<int>minvalue;
    MinStack() {
        
    }
    
    void push(int val) {
        value.push(val);
        if(minvalue.empty() || minvalue.top() >= val)
            minvalue.push(val);
        
    }
    
    void pop() {
        int t = value.top();
        value.pop();
        if (t == minvalue.top())
            minvalue.pop();

    }
    
    int top() {
        return value.top();
    }
    
    int getMin() {
        if(minvalue.empty())
            return -1; 
        else
            return minvalue.top();
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
