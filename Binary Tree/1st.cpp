#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
}; 

Node* makeNode(char data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
 void CreateTree(node *T){
    int choice;
    cout<<"We"
 }







void preorder(Node* root) {
    if(root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;
    root = makeNode('C');
    root->left = makeNode('X');
    root->right = makeNode('Y');
    root->left->left = makeNode('T');
    root->right->left = makeNode('M');
    root->right->right = makeNode('N');

    cout << "Pre-Order Traversal is: ";
    preorder(root);

    cout << "\n\nIn-Order Traversal is: ";
    inorder(root);

    cout << "\n\nPost-Order Traversal is: ";
    postorder(root);

    return 0;
}