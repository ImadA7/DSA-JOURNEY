#include <iostream>//stack using stl
#include <vector>
#include<string>
#include<stack>
using namespace std;
template<class T>
class Stack {
    vector<T> vec;

public:
    void push(T val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    T top() {
        // if (isEmpty()) {
        //     cout << "stack is empty\n";
        //     return -1; // return a sentinel value
        // }
        int lastidx = vec.size() - 1;
        return vec[lastidx];
    }

    bool isEmpty() {
        return vec.empty();
    }
};

int main() {
    //STL Stack 
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout << s.top() << endl; // 1
    s.pop();
    cout << s.top() << endl; // 2

    return 0;
}
