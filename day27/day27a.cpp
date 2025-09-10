#include<iostream> //stack
#include<vector>
using namespace std;//stack ek bucket ki tarah hota hein to isme element ko add sirf uper se hi kr skte hein aur remove bhi uper se hi kr skte hein..jaise balti se pani sif uper se nikala jaa skta hein

//create stack using vector
class Stack{
    vector<int> vec;
public:
    void push(int val) {
        vec.push_back(val);
    }
    void pop() {
        if(isempty()) {
            cout<<"stack is empty\n";
            return;
        }
        vec.pop_back();
    }
    int top() {
        if(isempty()) {
            cout<<"stack is empty\n";
            return -1;
        }
        int lastidx=vec.size()-1;
        return vec[lastidx];
    }

    bool isempty() {
        return vec.size()==0;
    }

};


int main(){ //stack is called LIFO(last in first out)
    Stack s;//ye s jo hein stack ban gya
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()) {
        cout<< s.top()<<" ";
        s.pop();
    }
    return 0; 
}