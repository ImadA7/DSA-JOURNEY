#include<iostream> //get ith bit 
using namespace std;

int getithbit(int num, int i) {
    int bitmask=1<<i;

    if((num & bitmask)==0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    cout << getithbit(6,2);
    
    return 0;
}