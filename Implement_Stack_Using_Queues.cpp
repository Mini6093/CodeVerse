class MyStack {
    queue<int> q;
public:
    MyStack() {}

    void push(int x) {
        q.push(x);
        for (int i = 1; i < q.size(); ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
