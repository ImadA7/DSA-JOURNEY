#include<iostream> //clear last ith bit 
using namespace std;

void clearithbit(int num, int i) {
    int bitmask = (~0)<<i;
    num= num& bitmask; 

    

    cout<<num<<endl;
}

int main() {
    clearithbit(15,2); //12
    return 0;
}