#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //Default constructor
    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int data){ // paar.. constructor
        this->data = data;
        this->next = NULL;
    }
};

bool tellaboutnode(node* head,node* tail){
    node* temp = head->next;
    while(temp != head){
    if(temp == tail){
        return true;
    }
    temp = temp->next;
    }
    return false;
}
bool checkforloop(node* head){
    if(head == NULL){
        cout<<"Add more eelmnts to the LL and ll is not existing"<<endl;
        return false;
    }
    node* slow = head;
    node* fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
            /* code */
        }
        if(slow == fast){
            return true;

        }
        
    }
    return false;
}
node* startingpointofloop(node* head){
    if(head == NULL){
        cout<<"Add more eelmnts to the LL and ll is not existing"<<endl;
        return NULL;
    }
    node* slow = head;
    node* fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
            /* code */
        }
        if(slow == fast){
            slow = head ;
            break;
        }

    }

    while(slow != fast){
        slow= slow->next;
        fast = fast->next;
    }
    return fast;
}
node* degenratesll(node* head){
    if(head == NULL){
        cout<<"Add more eelmnts to the LL and ll is not existing"<<endl;
        return NULL;
    }
    node* slow = head;
    node* fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
            /* code */
        }
        if(slow == fast){
            slow = head ;
            break;
        }

    }
    node* prev = fast;
    while(slow != fast){
        prev = fast;
        slow= slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    return fast;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
}
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
    ninth -> next = eighth;

// tellaboutnode(head,fifth);
// bool isPresent = tellaboutnode(head,fifth);
// cout << "Is fifth node present? " << ( isPresent ? "Yes" : "No") << endl;
// bool ispre = checkforloop(head);
// cout<<"Is there loop present in a node  -:"<<(ispre ? "YES" : "NO");
// cout<<startingpointofloop(head)->data;
degenratesll(head);
print(head);
 bool isPresent = tellaboutnode(head,fifth);
cout << "Is fifth node present? " << ( isPresent ? "Yes" : "No") << endl;
bool ispre = checkforloop(head);
cout<<"Is there loop present in a ?  -:"<<(ispre ? "YES" : "NO");
}