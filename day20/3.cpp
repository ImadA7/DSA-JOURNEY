//friends pairing problem
#include<iostream>
using namespace std;

int frndpairing(int n) {
    if(n==1 || n==2 ) {
        return n;
    }
    //single
    int ans1 =frndpairing(n-1);
    //pair
    int ans2=(n-1)*frndpairing(n-2); 
    return ans1 + ans2;
}

int main() {
    cout<<frndpairing(4); 
    
}