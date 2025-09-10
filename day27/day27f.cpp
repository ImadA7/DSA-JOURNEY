//reversing a string using a stack
#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reversestring(string str) {
    string ans;//iska reversal ans naam ki string mei store krenge
    stack<char> s;

    for(int i=0; i<str.size(); i++) {
        s.push(str[i]);
    }

    while(!s.empty()){
        char top=s.top();
        ans+=top;
        s.pop();
    }
    return ans;
}

int main() {
    string str="abcd";
    cout<<"reverse = "<<reversestring(str)<<endl;
    return 0;
}
