#include <bits/stdc++.h>
using namespace std;
class Queue{
    vector <int> item;
    int rear;
    int front;
    public:
    Queue(int m){
        item.resize(m);
        rear=-1;
        front=0;
        rear=(rear+1)%m;
        item[rear]=x;
        front=(front+1)%m;
        x=item[front];
        return x;
    }
    bool IsEmpty (){
        if (rear==front)
        return true;
        else
        return false;

    }
    void Enqueue()
++4
 }