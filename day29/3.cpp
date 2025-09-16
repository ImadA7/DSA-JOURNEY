#include<iostream> //stack using 2 queues(imp)
using namespace std;
#include<queue>

class stack {
    queue<int> q1;
    queue<int> q2;
public:
    void push(int data) {
        //q1->q2
        while(!q1.empty())  {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        //s2->s1
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop() {
        q1.pop();
    }
    int front() {
        return q1.front() ;
    }
    bool empty() {
        return q1.empty();
    }
};

int main()  {
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()) {
        cout<<s.front()<<endl;
        s.pop();
    } 
    return 0;
}