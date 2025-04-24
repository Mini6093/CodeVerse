class MyCircularQueue {
    vector<int> q;
    int front, rear, size, cap;
public:
    MyCircularQueue(int k) {
        q.resize(k);
        front = 0;
        rear = -1;
        size = 0;
        cap = k;
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        rear = (rear + 1) % cap;
        q[rear] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        front = (front + 1) % cap;
        size--;
        return true;
    }

    int Front() {
        return isEmpty() ? -1 : q[front];
    }

    int Rear() {
        return isEmpty() ? -1 : q[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == cap;
    }
};
