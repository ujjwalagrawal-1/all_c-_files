#include<iostream>
using namespace std;
class node{
    private:
    // node* head;
    node* next;
    node* prev;
    int data;
    public:
    node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL; 
    }

}

int main(){
    cout<<"Impleemnting the Ll"<<endl;
    node* head = new node(10);
    node* sec = new node(10);
    node* third = new node(10);
    node* fourth = new node(10);
    node* fifth = new node(10);
    node* sixth = new node(10);
    node* seventh = new node(10);
    head->next = sec;
    sec->prev = head;
    sec->prev = head;
    third->prev = sec;
    forth->prev = third;
    fifth->prev = fourth;
    sec->prev = head;
    sec->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

}