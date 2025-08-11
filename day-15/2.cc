#include<iostream>
using namespace std;
 
int* func() {
    int *ptr=new int;
    *ptr=1200;
    cout<<"ptr points to "<< *ptr <<endl;

    return ptr; // returns address, not just value
}
int main()  {
    int *x=func();  //Now x holds the same address as ptr did.
    cout<< *x << endl; //So *x will give you 1200, the value stored in that memory.

    return 0;
}