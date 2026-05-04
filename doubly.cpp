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
 Node* insertatend(Node* head, int value){
     Node*n= new Node(value);
     if(head== nullptr)
     {
         head= n;
     }
     else{
         Node*temp= head;
         while(temp->Next!= nullptr)
         {
                temp= temp->Next;
         }
         temp->Next= n;
         n->Prev= temp;

     }
 }
int main(){
    Node*head;
    head=new Node(10);
    head ->Next= new Node(20);
    head->Next->Next= new Node(30);
    cout<<"Output before insertion: ";
    display(head);
    cout<<endl;
    head= insertatbegining(head, 40);
    cout<<"Output after insertion: ";
    display(head);
    return 0;
}

