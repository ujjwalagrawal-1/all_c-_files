#include <iostream>
#include <vector>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;
  
  Node(int data){
    this->data = data;
  }
};
// input for the given code 
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// 7
//Implementation of the tree
Node* Buildtree(){
  int data;
  cin>>data;
  if(data == -1){
    return NULL;
  }
  Node* root = new Node(data);
//   cout<<"Please give data for left node"<<data<<endl;
  root->left = Buildtree();
//   cout<<"Please give data for Right node of "<<data<<endl;
  root->right = Buildtree();
  return root;
}
Node* insertionto_BST(Node* root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(root->data>data){
        root->left = insertinto_BST(root->left,data);
    }
    else{
        root->right = insertinto_BST(root->right,data);
    }
}
void insertinto_BST(Node* &root){
    int data;cin>>data;
    while(data != -1){
        insertionto_BST(root,data);
        cin>>data;
    }
}
int main(){
    Node* tree = NULL;
    insertinto_BST(tree);
    
}
