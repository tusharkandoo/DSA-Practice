#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node* MakeNode(char x)
{
    node *p = new node;

    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void CreateTree(node *T){
    int choice;
    cout << "Whether left of " << T->data << " exists? (1/0): ";
    cin >> choice;
    if (choice == 1){
        int x;
        cout << "Input the data of left node: ";
        cin >> x;
        node *p = MakeNode(x);
        T->left = p;
        CreateTree(p);
    }
    cout << "Whether right of " << T->data << " exists? (1/0): ";
    cin >> choice;
    if (choice == 1){
        int x;
        cout << "Input the data of right node: ";
        cin >> x;
        node *p = MakeNode(x);
        T->right = p;
        CreateTree(p);
    }
}
void Preorder(node *T)
{
    if (T == NULL)
        return;

    cout << T->data << " ";

    Preorder(T->left);
    Preorder(T->right);
}

void Inorder(node *T)
{
    if (T == NULL)
        return;

    Inorder(T->left);

    cout << T->data << " ";

    Inorder(T->right);
}

void Postorder(node *T)
{
    if (T == NULL)
        return;

    Postorder(T->left);
    Postorder(T->right);

    cout << T->data << " ";
}

int main()
{
    int x;

    cout << "Input the data of root node: ";
    cin >> x;

    node *root = MakeNode(x);

    CreateTree(root);

    cout << "\nPreorder Traversal: ";
    Preorder(root);

    cout << "\nInorder Traversal: ";
    Inorder(root);

    cout << "\nPostorder Traversal: ";
    Postorder(root);

    return 0;
}