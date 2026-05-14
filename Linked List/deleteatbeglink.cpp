#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node*next;
    Node(int value) {
        data= value;
        next= NULL;
    }
};
Node* deleteAtBeginning(Node* head) {
    if (head== NULL) {
        cout<<"Linked List is Empty"<<endl;
        return head;
    }
    Node*temp= head;
    head= head->next;
    delete temp;
    return head;
}
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode= new Node(value);
    newNode->next= head;
    return newNode;
}
void display(Node* head) {
    Node* temp= head;
    while (temp!= NULL) {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() {
    Node* head= NULL;
    head= insertAtBeginning(head, 10);
    head= insertAtBeginning(head, 20);
    head= insertAtBeginning(head, 30);
    cout<<"Original List: ";
    display(head);
    head= deleteAtBeginning(head);
    cout<<"After Deletion: ";
    display(head);
    return 0;
}