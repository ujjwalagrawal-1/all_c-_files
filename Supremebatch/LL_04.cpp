#include <iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        this->data = 0;
        this->next =NULL;

    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
node* findmiddle(node* head){
    node* slow = head;
    node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next; 
        }
    }
    return slow;
}
node* reversefromnode(node* &start){
    node* prev = NULL;
    node* curr = start;
    node* forw = curr->next;

    while(curr != NULL){
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    delete curr;
    return prev;
}
bool plaindrom_or_not(node* head){
    if(head == NULL){
        return true;
    }
    else if(head->next == NULL){
        return true;
    }
    else{
        node* middle = findmiddle(head);
        node* connect = reversefromnode(middle->next);
        middle->next = connect;
        node* temp = head;
        while(connect !=NULL){
            if(temp->data == connect->data){
                connect = connect->next;
                temp = temp->next;
            }
            else{
                return false;
            }
        }
        return true;
    }  
}
node* RemoveDublicates(node* &head){
    node* temp = head;
    while(temp != NULL){
       
        if((temp->next !=NULL)&& (temp->data == temp->next->data)){
            node* copy = temp->next;
            
            temp->next = temp->next->next;
            copy->next =NULL;
            delete copy;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}
void insertattail(node* &head,node* &tail,int data){
    if(tail == NULL || head == NULL){
        node* newnode = new node(data);
        tail = newnode;
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* newnode = new node(data);
    temp->next = newnode;
    return;
}
node* removedfromunorderll(node* head){
    node* temp = head;
    map<int,int>hash;
    while(temp!=NULL){
        hash[temp->data]++;
        temp = temp->next;
    }
    node* king = NULL;
    node* tail = NULL;
   for (auto it = hash.begin();
         it != hash.end(); ++it){
            insertattail(king,tail,it->first);
            }
    return king;
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return;
}
int main(){
    node* head = new node(10);
    node* second = new node(50);
    node* third = new node(20);
    node* fourth = new node(60);
    node* fifth = new node(50);
    node* sixth = new node(50);
    node* seventh = new node(10);
    node* eighth = new node(20);
    node* ninth = new node(60);
    head -> next = second;
    second -> next = third;  
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = seventh;
    seventh -> next = eighth;
    eighth -> next = ninth;
    ninth -> next = NULL;
    // // cout<<findmiddle(head)->data;
    // bool ispossible = plaindrom_or_not(head);
    // cout<<"The given linked list is "<<(ispossible?"palindrome":"Not a palindrome");
    // // print(head);

    // // removing duplicates from sorted linked list
    // // print(head);
    // // cout<<endl;
    
    // print(RemoveDublicates(head));

    // remove duplicates from unordered linked list;
    print(removedfromunorderll(head));
}