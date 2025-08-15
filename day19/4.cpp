#include<iostream> //sum of n natural numbers
using namespace std;

int sum(int n) {
    if(n==0) {
        return 0;
    }
    return n+ sum(n-1);
    
}


int main() {
    int ans = sum(10);
    cout<<ans;
    
    return 0; 
}