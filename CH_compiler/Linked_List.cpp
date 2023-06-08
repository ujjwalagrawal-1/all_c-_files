#include <iostream>
using namespace std;

class node {
public:
  int data;
  node* next;
  node* prev;

  node() {
    this->data = 0;
    this->next = NULL;
    this->prev = NULL;
  }

  node(int data) {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};

int getlength(node* &head) {
  node* temp = head;
  int i = 0;
  while (temp != NULL) {
    temp = temp->next;
    i++;
  }
  return i;
}

void insertathead(node* &head, node* &tail, int data) {
  if (head == NULL || tail == NULL) {
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
    return;
  }
  node* newnode = new node(data);
  newnode->next = head;
  head->prev = newnode;
  head = newnode;
}

void insertattail(node* &head, node* &tail, int data) {
  if (head == NULL || tail == NULL) {
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
    return;
  }
  node* newnode = new node(data);
  tail->next = newnode;
  newnode->prev = tail;
  tail = newnode;
}

void insertatposition(node* &head, node* &tail, int data, int position) {
  if (head == NULL || tail == NULL) {
    node* newnode = new node(data);
    head = newnode;
    tail = newnode;
  } else {
    if (position == 1) {
      insertathead(head, tail, data);
      return;
    }
    int len = getlength(head);
    if (position > len) {
      insertattail(head, tail, data);
      return;
    } else {
      int i = 1;
      node* prevN = head;
      while (i < position - 1) {
        prevN = prevN->next;
        i++;
      }
      node* curr = prevN->next;
      node* newnode = new node(data);
      newnode->next = curr;
      prevN->next = newnode;
      curr->prev = newnode;
      newnode->prev = prevN;
    }
  }
}
void deleteatposition(node* &head,node* &tail,int position){
  if(head == NULL){
    cout<<"Linked List is Empty LL please Enter atleast on element to delete any element"<<endl;
  }
  int len = getlength(head);
  if(position == 1){
    node* temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
    return;
  }
  if(position > len){
    cout<<"No such position Exist in a LL(in short LL is end now)"<<endl;
  } 
  if(position == len){
    node* temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
    return;
  }
  else{
    node* left = head;
    int i = 1;
    while(i < position-1){
      left = left->next;
      i++;
    }
    node* curr = left->next;
    node* right = curr->next;
    left->next = right;
    right->prev = left;
    delete curr;
    return;
  }
}

void print(node* &head) {
  node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "  ";
    temp = temp->next;
  }
}

int main() {
  node* head = NULL;
  node* tail = NULL;
  insertathead(head,tail,10);
  insertathead(head,tail,20);
  insertathead(head,tail,30);
  insertattail(head,tail,40);
  insertatposition(head, tail, 1, 1);
  insertatposition(head, tail, 2, 2);
  insertatposition(head, tail, 3, 3);
  insertatposition(head, tail, 4, 4);
  insertatposition(head, tail, 5, 5);
  insertatposition(head, tail, 6, 6);
  insertattail(head,tail,66);
  deleteatposition(head,tail,12);
  print(head);
  
  return 0;
}
