class MyStack {
public:
    queue<int> q;

    
    
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int n = q.size();
        if(n == 0) {
            return -1;
        }
        int val = q.back();
        for(int i=1;i<n;i++) {
            q.push(q.front());
            q.pop();
        }
        q.pop();
        return val;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
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