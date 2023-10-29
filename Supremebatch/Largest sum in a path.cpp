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
void Longest_Sum_of_branch(Node* &root,int &maximum,int &nodesum){
        if(root == NULL){
                return ;
        }
        if(root->left == NULL && root->right == NULL){
                nodesum += root->data;
                maximum = max(maximum,nodesum);
                nodesum -= root->data;
        }
        nodesum += root->data;
        Longest_Sum_of_branch(root->left,maximum,nodesum);
        Longest_Sum_of_branch(root->right,maximum,nodesum);
        nodesum -= root->data;

}

int main(){
  Node* Tree = Buildtree();
  int maximum = INT16_MIN;
  int nodesum = 0;
  Longest_Sum_of_branch(Tree,maximum,nodesum);
  cout<<maximum<<endl; 
  
}