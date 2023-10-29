#include<iostream>
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
Node* lowest_common_Ancestor(Node* &root,Node* &p,Node* &q){
  if(root == NULL){
    return NULL;
  }
  if(root->data == p->data){
    return p;
  }
  if(root->data == q->data){
    return q;
  }
  Node* leftkaanswer = (root->left,p,q);
  Node* rightkaanswer = (root->right,p,q);
  if(leftkaanswer == NULL && rightkaanswer == NULL){
    return NULL;
  }
  else if(leftkaanswer != NULL && rightkaanswer == NULL){
    return leftkaanswer;
  }
  else if(leftkaanswer == NULL && rightkaanswer != NULL){
    return rightkaanswer;
  }
  else{
    return root;
  }
}
int main(){
  Node* Tree = Buildtree();
  // creating code for finding the encestor
  Node* p = Tree->left->left;
  Node* q = Tree->left->right;
  cout<<lowest_common_Ancestor(Tree,p,q)->data<<endl;

}