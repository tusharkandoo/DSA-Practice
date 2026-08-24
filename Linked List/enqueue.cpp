#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* GetNode() {
    Node* p;
    p = new Node;
    return p;
}
Node* EnQueue(Node* PQ, int x) {
    Node* newnode = GetNode();
    newnode->data = x;
    Node *P, *Q;
    P = PQ;
    Q = NULL;
    while (P != NULL && P->data < x) {
        Q = P;
        P = P->next;
    }
    if (Q != NULL) {
        Q->next = newnode;
        newnode->next = P;
    }
    else {
        newnode->next = PQ;
        PQ = newnode;
    }
    return PQ;
}
void Traverse(Node* Head) {
    Node* P = Head;

    while (P != NULL) {
        cout << P->data << " ";
        P = P->next;
    }
}
Node *Deques (Node *PQ){
    Node *P;
    P=PQ;
    PQ=PQ->next;
    int x=P->data;
    cout<<"Deleted Information is "<<x<<endl;
    delete P;
    return PQ;
}
int main() {
    Node* PQ = NULL;
    PQ = EnQueue(PQ, 5);
    PQ = EnQueue(PQ, 3);
    PQ = EnQueue(PQ, 7);
    PQ = EnQueue(PQ, 1);
    PQ = EnQueue(PQ, 9);
    PQ = EnQueue(PQ, 4);
    PQ = EnQueue(PQ, 6);
    PQ = EnQueue(PQ, 2);
    PQ = EnQueue(PQ, 8);
    Traverse(PQ);
    PQ = Deques(PQ);
    Traverse(PQ);
    return 0;
}