#include<iostream>//duplicate paranthesis 
using namespace std;
#include<stack>

bool isduplocate(string str) {
    stack<char> s;
    for(int i=0;i<str.size();i++) {
        char ch=str[i];
        if(ch !=')') {
            s.push(ch);
        } else { //closing
            if(s.top()=='(') {
                return true; //duplicate
            }
            while(s.top() != '(') {
                s.pop();
            }
            s.pop();
        }
    }
    return false;

}


int main() {
    string str1="((a+b))";
    string str2="((a+b)+(c+d))";
    cout<<isduplocate(str1)<<endl;
    cout<<isduplocate(str2)<<endl;

    return 0;
}