#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
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
// 10 20 30 -1 -1 40 60 -1 -1 -1 80 50 -1 70 -1 -1 90 -1 -1
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
void topview(Node* &Tree){
  if(Tree == NULL){
    return;
  }
  map<int,int>topnode;
  queue<pair<Node*,int>>q;
  q.push({Tree,0});
  while(!q.empty()){
    pair<Node*,int>check = q.front();
    int hdcheck = check.second;
    if(topnode.find(hdcheck) == topnode.end()){
      topnode[hdcheck] = (check.first)->data;
    }
    if(check.first->left != NULL){
      q.push({check.first->left,hdcheck-1});
    }
    if(check.first->right != NULL){
      q.push({check.first->right,hdcheck+1});
    }
    q.pop();
  }
  for(auto itr:topnode){
    cout<<itr.first<<"---> "<<itr.second<<endl;
  }
}
void Bottomview(Node* &Tree){
  cout<<"Bottom view ifor the given tree is "<<endl;
  if(Tree == NULL){
    return;
  }
  map<int,int>topnode;
  queue<pair<Node*,int>>q;
  q.push({Tree,0});
  while(!q.empty()){
    pair<Node*,int>check = q.front();
    int hdcheck = check.second;
    
      topnode[hdcheck] = (check.first)->data;
    if(check.first->left != NULL){
      q.push({check.first->left,hdcheck-1});
    }
    if(check.first->right != NULL){
      q.push({check.first->right,hdcheck+1});
    }
    q.pop();
  }
  for(auto itr:topnode){
    cout<<itr.first<<"---> "<<itr.second<<endl;
  }
}

void leftview(Node* &root,stack<int>& s,int level){
  if(root == NULL){
    return;
  }
  if(level == s.size())
  s.push(root->data);
  leftview(root->left,s,level+1);
  leftview(root->right,s,level+1);
}
void rightview(Node* &root,stack<int>& s,int level){
  if(root == NULL){
    return;
  }
  if(level == s.size())
  s.push(root->data);
  rightview(root->left,s,level+1);
  rightview(root->right,s,level+1);
}
void lefttraversal(Node* &root){
  if(root == NULL){
    return;
  }
  if(root->left == NULL && root->right == NULL){
    return;
  }
  cout<<root->data<<" ";
  if(root->left){
    lefttraversal(root->left);
  }
  else{
    lefttraversal(root->right);
  }
}

void righttraversal(Node* &root){
  if(root == NULL){
    return;
  }
  if(root->left == NULL && root->right == NULL){
    return;
  }
  if(root->right){
    righttraversal(root->left);
  }
  else{
    righttraversal(root->left);
  }
  cout<<root->data<<" ";
}
void bottomtraversal(Node* &root){
  if(root == NULL){
    return;
  }
  if(root->left == NULL && root->right == NULL){
    cout<<root->data<<" ";
    return;
  }
  bottomtraversal(root->left);
  bottomtraversal(root->right);
}
void boundaryordertraversal(Node* &root){
  if(root == NULL){
    cout<<"Chus mera"<<endl;
    return;
  }
  cout<<root->data<<" ";
  lefttraversal(root->left);
  bottomtraversal(root);
  righttraversal(root->right);
}
int main(){
  Node* Tree = Buildtree();
  topview(Tree);
  cout<<endl;
  cout<<endl;
  Bottomview(Tree);
  stack<int> s;
  int level = 0;
  leftview(Tree,s,level);
  cout<<"Side View of the tree is -->  ";
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<"Boundary Traversal for the tree"<<endl;
  boundaryordertraversal(Tree);
}