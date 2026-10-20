class MinStack {
public:
    stack<int> stck;
    stack<int> mins;
    MinStack() {

    }
    
    void push(int val) {
        stck.push(val);
        if(stck.size() == 1){
            mins.push(val);
            return;
        }
        if(val <= mins.top()){
            mins.push(val);
        }
    }
    
    void pop() {
        int del = stck.top();
        stck.pop();
        if(del == mins.top()){
            mins.pop();
        }
    }
    
    int top() {
        return stck.top();
    }
    
    int getMin() {
        return mins.top();
    }
};
