#include<iostream> //next greater elemnt
using namespace std;
#include<vector>
#include<stack>
#include<string>

bool validpara(string str1, string str2){
    stack<char> s;
    for(int i=0;i<str1.size();i++){
        char ch=str1[i];
        if(ch!=')'){
            s.push(ch);
        } else {
            if(s.top()=='('){
                return true;
            }
            while(s.top()!='('){
                s.pop();
            }
        }
        int 
        while(ch!=')'){
            s.
        }
    }
     
}

int main(){
    string str1="((a+b))";
    string str2="((a+b)+(c+d))";
    return 0;   
}