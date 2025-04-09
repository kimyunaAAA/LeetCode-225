class MyStack {
private:
    std::queue<int> q;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int size = q.size();
         for (int i = 0; i < size - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};