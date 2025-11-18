#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
    string key;
    int val;
    Node* next;
    Node(string key, int val){
        this->key=key;
        this->val=val;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

class HashTable{
    int totSize;
    int currSize;
    Node** table;

    int hashfunction(string key){
        int idx=0;
        for(int i=0;i<key.size();i++){
            idx=idx+(key[i])*(key[i])%totSize;
        }
        return idx%totSize;
    }

    void rehash(){
        Node** oldtable= table;
        int oldtotSize= totSize;

        totSize= 2*totSize;
        table= new Node*[totSize];
        //copy old entries
        for(int i=0;i<oldtotSize;i++){
            Node* temp= oldtable[i];
            while(temp!=NULL){
                insert(temp->key,temp->val);
                temp=temp->next;
            }
        }
        delete [] oldTable;
    }
public:
    HashTable(int size){
        int totsize= size;
        int currsize=0;
        table= new Node*[totSize];
        for(int i=0;i<totSize;i++){
            table[i]=NULL;
        }
    }

    void insert(string key, string val){
        int idx= hashfunction(key);
        Node* newNode= new Node(key,val);
        n

    }

    void remove(){

    }

    bool exists(string key){
        
    }

    int search(){

    }


};

int main(){
    return 0;
}