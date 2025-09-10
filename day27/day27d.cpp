//stack in STL
#include<iostream> 
#include<vector>
#include<stack>
using namespace std;

int main(){ 
    //STL stack
    stack<int> s; // s is small coz ye stl wala h 
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.empty()) {
        cout<< s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    
    return 0; 
}