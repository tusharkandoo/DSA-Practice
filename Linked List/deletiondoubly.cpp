#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* Next;
    Node* Prev;
    Node(int value){
        data= value;
        Next= nullptr;
        Prev= nullptr;      
    }
};  
Node* insertatbegining(Node* head, int value){
    Node* n= new Node(value);
    if(head== nullptr){
        head= n;
        return head;     
    }
    Node* temp= head;
    n->Next= head;
    head->Prev= n;
    head= n;
    return head;
}
void display(Node* head){
    Node* temp;
    temp= head;
    while(temp!= nullptr){
        cout<<temp->data;
        temp= temp->Next;     
    }
}
Node* deleteatbegining(Node* head){
    if(head== nullptr){
        cout<<"Linked List is Empty"<<endl;
        return head;     
    }
    Node* temp= head;
    head= head->Next;
    if(head!= nullptr){
        head->Prev= nullptr;
    }
    delete temp;
    return head;
}
Node* deleteatend(Node* head){
    if(head== nullptr){
        cout<<"Linked List is Empty"<<endl;
        return head;     
    }
    Node* temp= head;
    while(temp->Next!= nullptr){
        temp= temp->Next;     
    }
    if(temp->Prev!= nullptr){
        temp->Prev->Next= nullptr;
    }
    else{
        head= nullptr;
    }
    delete temp;
    return head;
}
int main(){
    Node*head;
    head=new Node(10);
    head ->Next= new Node(20);
    head ->Next->Prev= head;
    head ->Next->Next= new Node(30);
    head ->Next->Next->Prev= head ->Next;
    display(head);
    cout<<endl;
    head= deleteatbegining(head);
    display(head);
    cout<<endl;
    head= deleteatend(head);
    display(head);
}


