#include<iostream>
#include<vector>
using namespace std;

class Stack {
    vector<int> vec;
public:
    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) return;
        vec.pop_back();
    }

    int top() {
        if (isEmpty()) return -1;
        return vec.back();
    }

    bool isEmpty() {
        return vec.empty();
    }

    // ✅ Push at bottom using recursion
    void pushAtBottom(int val) {
        if (isEmpty()) {
            push(val);  // base case: when stack is empty, push directly
            return;
        }

        // Step 1: store top element
        int topElement = top();
        pop();

        // Step 2: recursively call to reach bottom
        pushAtBottom(val);

        // Step 3: push the stored elements back
        push(topElement);
    }

    void print() {
        for (int x : vec) cout << x << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Original stack: ";
    s.print();

    s.pushAtBottom(99);

    cout << "After pushAtBottom: ";
    s.print();

    return 0;
}
