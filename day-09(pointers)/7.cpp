#include<iostream> 
using namespace std;
int main()  {
    int a=10;
    int &b=a;
    b=25;   //a and b refer to the same locaton in memory
    cout<<a;
    return 0; 
}