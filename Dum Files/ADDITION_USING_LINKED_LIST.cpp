#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        this->data =0;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
node* reverse(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* forward = curr->next;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
node* addition(node* &head1,node* &head2){
    // step:1 reverse the linked list head1
    head1 = reverse(head1);
    head2 = reverse(head2);
    // step:2 add the linked list
    node* anshead = NULL;
    node* anstail = NULL;
    int carry = 0;
    while(head1 != NULL && head2!= NULL){
        int sum = head1->data + head2->data + carry;
        int digit = sum%10;
        carry = sum/10;
        node* newnode = new node(digit);
        if(anshead == NULL){
            anshead = newnode;
            anstail = newnode;
        }
        else{
            anstail->next = newnode;
            anstail = newnode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while(head1 != NULL){
        int sum = head1->data + carry;
        int digit = sum%10;
        carry = sum/10;
        node* newnode = new node(digit);
        anstail->next = newnode;
        anstail = newnode;
        head1 = head1->next;
    }
    while(head2 != NULL){
        int sum = head2->data + carry;
        int digit = sum%10;
        carry = sum/10;
        node* newnode = new node(digit);
        anstail->next = newnode;
        anstail = newnode;
        head2 = head2->next;
    }
    while(carry != 0) {
                int sum = carry;
                int digit = sum % 10;
                carry = sum / 10;
                node* newnode = new node(digit);
                anstail -> next = newnode;
                anstail = newnode;
        }
        anshead = reverse(anshead);
        return anshead;
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
    node* head1 = new node(1);
    node* sec1 = new node(2);
    node* third1 = new node(3);
    head1->next = sec1;
    sec1->next = third1;



    // secound linked list
    node* head2 = new node(1);
    node* sec2 = new node(2);
    node* third2 = new node(3);
    node* fourth2 = new node(4);
    head2->next = sec2;
    sec2->next = third2;
    third2->next = fourth2;

    node* sum = addition(head1,head2);
    print(sum);
}