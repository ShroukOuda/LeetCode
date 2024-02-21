class MinStack {
public:
    stack<int> stk;
    int min;

    MinStack() {
        min = INT_MAX; 
    }

    void push(int val) {
        if (val <= min) {
            stk.push(min);  
            min = val;   
        }
        stk.push(val);
    }

    void pop() {
        if (stk.top() == min) {
            stk.pop();   
            min = stk.top();
        }
        stk.pop();
    }

    int top() {
        return stk.top();
    }

    int getMin() {
        return min;
    }
};
