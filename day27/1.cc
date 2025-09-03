#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> vec;

public:
    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    int top() {
        if (isEmpty()) {
            cout << "stack is empty\n";
            return -1; // return a sentinel value
        }
        int lastidx = vec.size() - 1;
        return vec[lastidx];
    }

    bool isEmpty() {
        return vec.empty();
    }
};

int main() {
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout << s.top() << endl; // 1
    s.pop();
    cout << s.top() << endl; // 2

    return 0;
}
