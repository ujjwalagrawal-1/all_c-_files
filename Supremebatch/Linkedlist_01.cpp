#include <iostream>
using namespace std;
class node{
  public:
  int data;
  node* next;

  node(){
    this->data = 0;
    this->next = NULL;
  }
  node(int data){
    this->data = data;
    this->next =NULL;
  }
};

void insertathead(node* &head,node* &tail,int data){
  if(head == NULL){
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
  }
  else{
  node* newnode = new node(data);
  newnode->next = head;
  head = newnode;
  }
}
int maxpos(node* &head){
  
  int pos = 1;
  node* temp = head; 
  while(temp != NULL){
    temp = temp->next;
    pos++;
  }
  return pos;
}
void insertattail(node* &head,node* &tail,int data){
  if( head == NULL){
    node* newnode = new node(data);
    head = newnode; 
    tail = newnode;
    return;
  }
    node* newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
    
  }
void insertatposition(int data,int position,node* &head,node* &tail){
  if(head == NULL){
    node* newnode = new node(data);
    head = newnode; 
    tail = newnode;
    return;
  }
    
    if(position == 0){
      insertathead(head,tail,data);
      return;
    }
    int len = maxpos(head);
    // cout<<len<<endl;
    if(position >= len){
      insertattail(head,tail,data);
      return;
    }
    int i = 1;
    node* prev = head;
    while(i < position ){
      prev = prev->next;
      i++;
    }
    node* curr = prev->next;
    node* newnode = new node(data);
    newnode->next = curr;
    prev->next = newnode;
}
void deletenode(node* &head,node* &tail,int position){

  if(position == 1){
    node* temp = head;
    head = head -> next;
    temp->next = NULL;
    delete temp;
    cout<<"processed"<<endl; 
    return;
  }
  int len = maxpos(head);
  if(position==len){
    node* prev = head;
    while(prev->next->next!=NULL){
      prev = prev->next;
    }
    prev->next = NULL;
  }

  int i = 1;
  node* prev = head;
  while(i<position-1){
    prev = prev->next;
    i++;
  }
  node* curr = prev->next;
  prev->next = curr->next;
  curr->next = NULL;
  delete curr;
}
node* headreverse(node* &prev,node* &curr){
  // base condition
  if(curr == NULL){
    return prev;
  }
  
  node* forward = curr->next;
  curr->next = prev;
  headreverse(curr,forward);

}
// Reversing a linked list using loop
node* reversell(node* &head){
  node* prev = NULL;
  node* curr = head;
  while(curr != NULL){
  node* temp = curr->next;
  curr->next = prev;
  prev = curr;
  curr = temp;
  }
  return prev;
}
  
void printll(node* &head){
  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<"  ";
     temp = temp->next;
    
  }
}

int main() {
  node* head = NULL;
  node* tail = NULL;
  insertathead(head,tail,10);
  insertathead(head,tail,20);
  insertathead(head,tail,30);
  insertathead(head,tail,40);
  insertathead(head,tail,50);
  // cout<<head->data<<endl;
  insertatposition(55,1,head,tail);
  insertatposition(60,9,head,tail);
  // cout<<maxpos(head)<<endl;
  printll(head);
  cout<<endl;
  // deletenode(head,tail,1);
  // deletenode(head,tail,1);
  // deletenode(head,tail,5);
  // deletenode(head,tail,4);

  // deletenode(head,tail,2);
  node* prev = NULL;
  node* curr = head;
  // head = headreverse(prev,curr);
  head = reversell(head);
  printll(head);


}