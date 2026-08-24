#include <bits/stdc++.h>
using namespace std;
class Queue {
    vector<int> item;
    int rear;
    int front;
public:
    Queue(int m) {
        item.resize(m);
        rear = -1;
        front = 0;
    }
    bool IsEmpty() {
        if (rear - front + 1 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    void EnQueue(int x) {
        int m = item.size();

        if (rear == m - 1) {
            cout << "Queue is overflow" << endl;
            return;
        }
        rear++;
        item[rear] = x;
    }
    int DeQueue() {
        if (rear - front + 1 == 0) {
            cout << "Queue is underflow" << endl;
            return -1;
        }
        else {
            int x = item[front];
            front++;
            return x;
        }
    }
};
int main() {
    Queue q(5);
    q.EnQueue(1);
    q.EnQueue(2);
    q.EnQueue(3);
    q.EnQueue(4);
    q.EnQueue(5);
    q.EnQueue(6);
    return 0;
}