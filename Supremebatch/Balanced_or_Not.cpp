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
int height(Node* root){
  if(root == NULL){
    return 0;
  }
  int left_tree = height(root->left);
  int right_tree = height(root->right);
  int ans = max(left_tree,right_tree) + 1;
  return ans;
}
bool Balanced_or_Not(Node* &root){
  if(root ==  NULL){
    return true;
  }
  int left = height(root->left);
  int right = height(root->right); 
  int ans = abs(left-right);

  bool ans1 = (ans<=1);
  bool ans2 = Balanced_or_Not(root->left);
  bool ans3 = Balanced_or_Not(root->right);
  if(ans1 && ans2 && ans3){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  Node* Tree = Buildtree();
//   code checking tree is Balanced or Not;
//   cout<<Balanced_or_Not(Tree)<<endl;;
cout<<"Tree is Balanced or Not ??"<<endl;
  if(Balanced_or_Not(Tree)){
    cout<<"Tree is found to be balanced"<<endl;
  }
  else{
    cout<<"Tree is Not found to be balanced"<<endl;
  }
}