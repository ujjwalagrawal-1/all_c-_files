#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* root;
    Node* left;
    Node* right;
    Node(){
        this->root = NULL;
        this->data = 0;
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data){
        this->root = NULL;
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};
void preorder(Node* &root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* &root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}
void inorder(Node* &root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}
int main(){


    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<"preorder: ";
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
}