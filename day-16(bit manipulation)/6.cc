#include<iostream> //check for power of 2
using namespace std;

int ispowerof2(int num) {
    if(((num)&(num-1))==0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << ispowerof2(4)<<endl;
    cout << ispowerof2(7)<<endl;
    
    return 0;
}