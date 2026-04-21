#include <bits/stdc++.h>
using namespace std;

class node
{
    public :
    int data;
    node*next;
    node(int value)
    {
        data=value;
        next=nullptr;
    }
};
node*insertatbeg(node*head,int value)
{
    node*n=new node(value);
    if(head==nullptr)
    {
        n->next=nullptr;
        head=n;
    }
    else
    {
        n->next=head;
        head=n;
    }
    return(head);
}
node*insertatend(node*head,int value)
{
    node*n=new node(value);
    if(head==nullptr)
    {
        head = n;
    }
    else
    {
        node*temp= head;
        while(temp->next!= nullptr)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    return head;
}


void display (node*head)
{
    node*temp;
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
}

int main() {
    node*head;
    head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    display(head);
    head=insertatbeg(head,50);
    display(head);
    head = insertatend(head, 40);
    display(head);
}