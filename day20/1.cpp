//Tiling problem
//count total ways to tile a floor (2xn) with tiles of (2x1).. we can change the value like (4xn)
#include<iostream>
using namespace std;

int tiling(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    //vertical wali choice
    int ans1=tiling(n-1);

    //horizontal
    int ans2=tiling(n-2);

    return ans1+ans2;
}

int main() {
    cout<<tiling(4);
    return 0;
}