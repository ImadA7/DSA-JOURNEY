#include<iostream>
using namespace std;

int sumofnumber(int n){
    int sum=0;
    if(n==0){
        return 0;
    } else {
        return n+sumofnumber(n-1);
    }
    sumofnumber(n-1);
}

int main(){
    cout<<sumofnumber(3);
    return 0;
}