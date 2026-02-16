class myStack {
private:
    int *arr;
    int top;
    int capacity;

public:
    myStack(int n) {
        capacity = n;
        arr = new int[n];
        top = -1;
    }

    void push(int x) {
        if (isFull()) return;
        arr[++top] = x;
    }

    int pop() {
        if (isEmpty()) return -1;
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) return -1;
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }
};
