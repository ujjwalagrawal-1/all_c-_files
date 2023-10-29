#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data; 
    node* right;
    node* left;
    node(){
        this->data = 0;
        this->right = NULL;
        this->left =NULL;
    }
    node(int data){
        this->data =data;
        this->right =NULL;
        this->left = NULL;
    }
};
node* insert_a_node(){
    cout<<"Implementing the tree"<<endl;
    int data;cin>>data;
    if(data == -1){
        return NULL;
    }
    //Implement the node;
    node* root = new node(data);
    cout<<"Please enter the data for the left part of the "<<data<<endl;
    root->left = insert_a_node();
    cout<<"Please enter the data for the right part of the  "<<data<<endl;
    root->right = insert_a_node();

    return root;
}
void Level_order_Traversal(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
    node* temp = q.front();
    q.pop();
    cout<<temp->data<<"  ";
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }
    } 

}
int main(){
    node* root = NULL;
    root = insert_a_node();
    Level_order_Traversal(root);

}