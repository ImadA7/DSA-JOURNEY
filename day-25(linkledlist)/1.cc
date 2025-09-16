#include <iostream>
using namespace std;

class Node
{
public: // <-- make members accessible
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class LinkedList
{
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    ~LinkedList()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void pushfront(int val)
    {
        Node *newNode = new Node(val); // dynamically allocating memory
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void pushback(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    } // ✅ properly closed pushback()

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void insertAtPosition(int pos, int val)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void popfront()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void popback()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int searchitr(int key)
    {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    int helper(Node *temp, int key)
    {
        if (temp == NULL)
        {
            return -1;
        }
        if (temp->data == key)
        {
            return 0;
        }

        int idx = helper(temp->next, key);
        if (idx == -1)
        {
            return -1;
        }

        return idx + 1;
    }

    int searchrec(int key)
    {
        return helper(head, key);
    }

    void reverse()
    {
        Node *curr = head;
        Node *prev = NULL;
        while (curr != NULL)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main()
{
    LinkedList ll; // <-- fixed object creation
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.printList();
    ll.pushback(4);

    return 0;
}
