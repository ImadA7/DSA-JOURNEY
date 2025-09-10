//using vector with class template 
#include<iostream> 
#include<vector>
using namespace std;

template<class T>
class Stack{
    vector<T> vec;
public:
    void push(T val) {
        vec.push_back(val);
    }
    void pop() {
        if(isempty()) {
            cout<<"stack is empty\n";
            return;
        }
        vec.pop_back();
    }
    T top() {
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


int main(){ 
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()) {
        cout<< s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    Stack<char> s; // we can now use anyone and also use strig and all type
    s.push('i');
    s.push('m');
    s.push('a');
    s.push('d');
    while(!s.isempty()) {
        cout<< s.top()<<" ";
        s.pop();
    }
    return 0; 
}