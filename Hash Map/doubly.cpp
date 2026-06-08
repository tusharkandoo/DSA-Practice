//WAP to insert a node at beginning in doubly linked list
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
};
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main() {
    Node* head = NULL;
    int n;
    cout<<"Enter the numer of nodes: ";
    cin>>n;
    int value;
    for(int i=0; i<n; i++){
        cout<<"Enter the value of node "<<i+1<<": ";
        cin>>value;
        insertAtBeginning(head, value);
    }
    display(head);
    return 0;
}