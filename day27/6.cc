#include<iostream>
#include<stack>
using namespace std;

// Push at bottom using recursion
void pushAtBottom(stack<int> &s, int val) {
    if (s.empty()) {
        s.push(val);  // base case: push when stack is empty
        return;
    }

    // Step 1: store top element
    int topElement = s.top();
    s.pop();

    // Step 2: recursive call
    pushAtBottom(s, val);

    // Step 3: push stored elements back
    s.push(topElement);
}

// Reverse stack using recursion
void reverse(stack<int> &s) {
    if (s.empty()) {
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}

// Print stack
void printstack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main() {
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Original Stack: ";
    printstack(s);

    reverse(s);

    cout << "Reversed Stack: ";
    printstack(s);

    return 0;
}
