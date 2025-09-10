#include<iostream>//lin  ked list
using namespace std; //push_front function
                     //push_back function
                        //print ll
class node{            //insert in ll middle
public:                //deleting a linnk list
    int data;         //pop front(pehle wale node ko dleet krna)
    node* next;          //iterative search


    node(int val) {
        data=val;
        next= NULL;
    } 
    ~node() {
        if(next!=NULL) {
            delete next;
            next=NULL;
        }
    }

    

};

class List{
    node* head; 
    node* tail;

public:
    List() {
        head=NULL;
        tail=NULL;

    }
    ~List() {
        if(head!=NULL) {
            delete head;
            head=NULL;
        }
    }
    void push_front(int val) {
        node* newnode= new node(val); //dyanmic alocstion
     // node* newnode(val); static wala hoga
        if(head==NULL) {
            head=tail=newnode;
        } else {
            newnode->next = head;
            head=newnode;
        }
    }
    void push_back(int val) {
        node* newnode= new node(val); 
        if(head==NULL) {
            head=tail=newnode;
        } else {
            tail->next = newnode;
            tail=newnode;
        }
    } 

    void printlist() {
        node* temp=head;
        while(temp!= NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }

        cout<<"NULL\n";
    }
    void insert(int val, int pos) {
        node* newnode=new node(val);
        node* temp=head;
        for(int i=0;i<pos-1;i++) {
            if(temp==NULL) {
                cout<<"postion is invalid\n";
                return;
            }
            temp=temp->next;
        }
        //temp is not at pos-1
        newnode->next=temp->next;
        temp->next=newnode;
    } 

    void pop_front() {
        if(head==NULL) {
            cout<<"ll is empty";
            return;
        }
        
        node* temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back() {
        node* temp=head;
        while(temp->next->next!=NULL) {
            temp=temp->next;

        }
        temp->next=NULL; //temp=tails prev 
        delete tail;
        tail=temp;
    }   

    int searchitr(int key) {
        node* temp=head;
        int idx=0;
        while(temp!=NULL) {
            if(temp->data==key) {
                return idx;

            }
            temp=temp->next;
            idx++;
        }
        return -1;

    }
    int helper(node* temp, int key) {
        if(temp==NULL) {
            return -1;
        }
        if(temp->data==key) {
            return 0;
        }
        int idx=helper(temp->next, key);
        if(idx==-1) {
            return -1;
        }
        return idx+1;
    }
    int searchrec(int key){
        return helper(head,key);
    }

    void reverse() {   //reverse a linked list
        node* curr=head;
        node* prev=NULL;
        tail=head;
        while(curr!=NULL) {
            node* next = curr->next;
            curr->next=prev;
            //updations for next itr
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    int getsize() {
        int sz=0;
        node* temp = head;
        while(temp!=NULL) {
            temp=temp->next;
            sz++;
        }
        return sz;

    }
    void removenth(int n) { //find nd del nth node
        int size= getsize();
        node* prev=head;
        for(int i=1;i<(size-n);i+1) {
            prev=prev->next;
        }
        node* todel=prev->next;
        cout<<"going to delete: "<<todel->data<<endl;
        prev->next=prev->next->next;
    }

     
 
};

int main() {
    List ll;

    ll.push_front(5); 
    ll.push_front(2);
    ll.push_front(1);
 
    ll.printlist();
    ll.push_back(4);
    ll.push_back(5);
    ll.printlist();
    ll.insert(100,2);
    ll.printlist(); 
    ll.pop_front();
    ll.printlist();
    ll.pop_back();
    ll.printlist(); 
    cout<<ll.searchitr(5)<<endl;
    cout<<ll.searchrec(4)<<endl;
    ll.reverse();
    ll.printlist();
    ll.removenth(2);
    ll.printlist();
    return 0;
}