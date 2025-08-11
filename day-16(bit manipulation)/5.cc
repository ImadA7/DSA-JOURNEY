#include<iostream> //clear ith bit 
using namespace std;

int clearithbit(int num, int i) {
    int bitmask=~(1<<i) ;

    return(num & bitmask);
}

int main() {
    cout << clearithbit(6,1);
    
    return 0;
}
