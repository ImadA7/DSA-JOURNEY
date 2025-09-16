#include <iostream>// queue using linkedlist
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Queue {
    Node* head; // only one pointer
public:
    Queue() {
        head = NULL;
    }

    void push(int data) {
        Node* n = new Node(data);
        if (head == NULL) {
            head = n;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
        }
    }

    void pop() {
        if (head == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front() {
        if (head == NULL) {
            cout << "Queue is empty\n";
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.front() << endl; // 1
    q.pop();

    cout << q.front() << endl; // 2
    q.pop();

    cout << q.front() << endl; // 3
    q.pop();

    cout << q.empty() << endl; // 1 (true)

    return 0;
}
