#include <iostream>
#include <queue>
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
  cout<<"Please give data for left node"<<data<<endl;
  root->left = Buildtree();
  cout<<"Please give data for Right node of "<<data<<endl;
  root->right = Buildtree();
  return root;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//Level Order Traversal of the Tree
void Level_order_Traversal(Node* root){
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    
    Node* temp = q.front();
    q.pop();
    if(temp == NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
    cout<<temp->data<<"  ";
    if(temp->left){
      q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }
    }
  }
}
void Pre_order_Traversal(Node* root){
  if(root == NULL){
    return;
  }
  cout<<root->data<<" ";
  Pre_order_Traversal(root->left);
  Pre_order_Traversal(root->right);
}
void In_order_Traversal(Node* root){
  if(root == NULL){
    return;
  }
  In_order_Traversal(root->left);
  cout<<root->data<<" ";
  In_order_Traversal(root->right);
}
void Post_order_Traversal(Node* root){
  if(root == NULL){
    return;
  }
  Post_order_Traversal(root->left);
  Post_order_Traversal(root->right);
  cout<<root->data<<" ";
}
int main(){
  cout<<"Please give the data for the implementation of the tree"<<endl;
  Node* tree = Buildtree();
  cout<<"Level order traversal of the tree is :--  "<<endl;
  Level_order_Traversal(tree);
  cout<<"Pre order traversal of the tree is :--  "<<endl;
  Pre_order_Traversal(tree);
  cout<<endl;
  cout<<"In order traversal of the tree is :--  "<<endl;
  In_order_Traversal(tree);
  cout<<endl;
  cout<<"Post order traversal of the tree is :--  "<<endl;
  Post_order_Traversal(tree);
}