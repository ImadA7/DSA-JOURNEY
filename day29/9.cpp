#include<iostream>//stack using deque
using namespace std;
#include<stack>
#include<deque>
class stack {
    deque<int> deq;
public:
    void push(int data) {
        deq.push_front(data);
    }
    void pop() {
        deq.pop_front();
    }
    int top() {
        return deq.front();
    }
};
int main() {
    stack s;
    for(int i=1;i<=5;i++) {
        s.push(i);
    }
    for(int i=1;i<=5;i++) {
        cout<<s.front()<<endl;
        s.pop(); 
    }
    return 0;
}