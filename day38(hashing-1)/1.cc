#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
public:
    string key;
    int val;
    Node* next;
    Node(string key, int val){
        this->key = key;
        this->val = val;
        next = NULL;
    }
    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

class HashTable{
    int totSize;
    int currSize;
    Node** table;

    int hashfunction(string key){
        int idx = 0;
        for(int i = 0; i < key.size(); i++){
            idx = idx + (key[i] * key[i]) % totSize;
        }
        return idx % totSize;
    }

    void rehash(){
        Node** oldTable = table;
        int oldTotSize = totSize;

        totSize = 2 * totSize;
        table = new Node*[totSize];
        for(int i = 0; i < totSize; i++){
            table[i] = NULL;
        }

        // copy old entries
        for(int i = 0; i < oldTotSize; i++){
            Node* temp = oldTable[i];
            while(temp != NULL){
                insert(temp->key, temp->val);
                temp = temp->next;
            }
            if(oldTable[i] != NULL){
                delete oldTable[i];
            }
        }

        delete [] oldTable;
    }

public:
    HashTable(int size){
        totSize = size;
        currSize = 0;
        table = new Node*[totSize];
        for(int i = 0; i < totSize; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, int val){
        int idx = hashfunction(key);
        Node* newNode = new Node(key, val);
        newNode->next = table[idx];
        table[idx] = newNode;
        currSize++;

        double lambda = currSize / (double)totSize;
        if(lambda > 1){
            rehash();
        }
    }

    bool exists(string key){
        int idx = hashfunction(key);
        Node* head = table[idx];
        while(head != NULL){
            if(head->key == key){
                return true;
            }
            head = head->next;
        }
        return false;
    }

    int search(string key){   // FIX: return type must match return values
        int idx = hashfunction(key);
        Node* head = table[idx];
        while(head != NULL){
            if(head->key == key){
                return head->val;
            }
            head = head->next;
        }
        return -1;
    }

    void remove(string key){
        int idx = hashfunction(key);
        Node* head = table[idx];
        Node* prev = NULL;

        while(head != NULL){
            if(head->key == key){
                if(prev == NULL){
                    table[idx] = head->next;   // FIX: missing semicolon
                }else{
                    prev->next = head->next;
                }
                head->next = NULL; // avoid recursive delete
                delete head;
                return;
            }
            prev = head;
            head = head->next; // FIX: missing pointer movement
        }
    }

    void print(){
        for(int i = 0; i < totSize; i++){
            cout << "idx " << i << " : ";
            Node* head = table[i];
            while(head != NULL){
                cout << head->key << " -> ";
                head = head->next;
            }
            cout << endl;
        }
    }
};

int main(){
    HashTable ht(10);
    return 0;
}
