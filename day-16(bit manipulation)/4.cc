#include<iostream> //set ith bit 
using namespace std;

int setithbit(int num, int i) {
    int bitmask=1<<i;

    return(num | bitmask);
}

int main() {
    cout << setithbit(6,3);
    
    return 0;
}