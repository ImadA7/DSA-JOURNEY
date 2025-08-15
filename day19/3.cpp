#include<iostream>
using namespace std;
//print numbers in dec order from n to 1  

void print(int n) {
    if(n==0){
        return;
    }
    cout<< n << " "; //swich line 9 and 10 to print in ascneidng order
    print(n-1);
}

int main() {
    print(100);
    return 0; 
}