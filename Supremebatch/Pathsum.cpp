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
void Pathsum(Node* &root,vector<int>& path,vector<vector<int>>& answer,int &currsum,int &pathsum){
  if(root == NULL){
    return;
  }
  if(root->left == NULL && root->right == NULL){
    path.push_back(root->data);
    currsum += root->data;
    if(currsum == pathsum){
      answer.push_back(path);
    }
    path.pop_back();
    currsum -= root->data;
  }
  path.push_back(root->data);
  currsum += root->data;
  Pathsum(root->left,path,answer,currsum,pathsum);
  Pathsum(root->right,path,answer,currsum,pathsum);
  path.pop_back();
  currsum -= root->data;
}

int main(){
  Node* Tree = Buildtree();
  vector<int> path;
  vector<vector<int>> answer;
  int currsum = 0;
  int pathsum;
  cin>>pathsum;
  Pathsum(Tree,path,answer,currsum,pathsum);
  for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }    
        cout << endl;
    }
}