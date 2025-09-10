#include <iostream>
#include <stack>
using namespace std;

// Function to push an element at the bottom of the stack
void pushAtBottom(stack<int>& s, int x) {
    // Base case: if stack is empty, simply push the element
    if (s.empty()) {
        s.push(x);
        return;
    }
    
    // Recursive case: pop the top element, push the element to the bottom, and push back the popped element
    int topElement = s.top();
    s.pop();
    
    // Recursively call pushAtBottom to reach the bottom
    pushAtBottom(s, x);
    
    // Push the previously popped element back to the stack
    s.push(topElement);
}

int main() {
    stack<int> s;
    
    // Push some elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Stack before pushing at bottom:" << endl;
    stack<int> tempStack = s; // Temporary stack for display purposes
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Push 50 at the bottom of the stack
    pushAtBottom(s, 50);

    cout << "Stack after pushing 50 at bottom:" << endl;
    // Display the stack after the push operation
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
