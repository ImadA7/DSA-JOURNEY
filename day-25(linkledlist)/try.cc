#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }

};

class Linkedlist{
    Node *head;
    Node *tail;
public:
    Linkedlist(){
        head=NULL;
        tail=NULL;
    }

    void pushfront(int val){
        Node *newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        newNode->next=head;
        head=newNode;
    }

    void pushback(int val){
        Node *newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        } else {
            tail->next=newNode;
            tail=newNode;

        }
    }

    void porpfront(){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        while(temp->next->next=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
 
    void searchitr(int key){
        Node *temp=head;
        int idx=0;
        if(temp->data==key){
            return idx;
        }
    }

    void reverse(){
        Node *curr = head=
    }
};