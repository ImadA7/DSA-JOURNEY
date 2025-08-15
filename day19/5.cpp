#include<iostream>//print nth fibonacci series 

int fib(int n){
    if(n==0 || n==1) {
        return n;                    
    }
    return fib(n-1) + fib(n-2);
}
using namespace std;


int main() {
    cout<< fib(7);  
    
    return 0; 
}