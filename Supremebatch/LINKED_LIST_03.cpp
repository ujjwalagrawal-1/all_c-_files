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
        this->next = NULL;
    }
};
node* reversell(node* &prev,node* &curr){
        // Base condition
        if(curr == NULL){
            return prev;
        }

        node* forward = curr->next;
        curr->next = prev;
        reversell(curr,forward);
}
node* getmiddle(node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head->next == NULL){
        return head;
    }
    node* slow = head;
    node* fast = head;
    while(slow != NULL  && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
int getlength(node* head){
    node* temp = head;
    int i = 0;
    while(temp != NULL){
        i++;
        temp = temp->next;
    }
    return i;
}
node* reverseKNodes(node* &head, int k) {
        if(head == NULL) {
                cout << "LL is empty" << endl;
                return NULL;
        }
        int len = `(head);
        if(k > len) {
                //cout << "Enter valid value for k " << endl;
                node* prev = NULL;
                node* curr = head;
                head = reversell(prev,curr);
                return head;
        }

        //it means number of nodes in LL is >= k
        //Step A: reverse first k nodes of LL
        node* prev = NULL;
        node* curr = head;
        node* forward = curr -> next;
        int count = 0;

        while(count < k) {
                forward = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = forward;
                count++;
        }

        //Step B: recursive call
        if(forward != NULL){
                // we still have nodes left to reverse
                node* recursionKaAns = reverseKNodes(forward, k);
                head -> next = recursionKaAns;
        }

        //step C: return head of the modified LL
        return prev;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
}
// node* 
int main(){
  node* head = new node(10);
  node* second = new node(20);
  node* third = new node(30);
  node* fourth = new node(40);
  node* fifth = new node(50);
  node* sixth = new node(60);
  node* seventh = new node(70);
  node* eighth = new node(80);
  node* ninth = new node(90);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = seventh;
  seventh -> next = eighth;
  eighth -> next = ninth;
  ninth -> next = NULL;
    // print(head);
    // cout<<endl;
    head = reverseKNodes(head,10);
    print(head);
    // cout<<endl;
    // // cout<<"Middle is :"<<getmiddle(first)->data<<endl;

    // node* temp = NULL;
    
    // head = reversell(prev,curr);
    // print(head);

}