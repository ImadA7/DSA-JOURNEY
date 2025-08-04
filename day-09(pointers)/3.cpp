#include<iostream> //derefernce of operator
using namespace std;
int main()  {
    int a=10;
    int *ptr= &a;
    cout<< &a <<endl;
    cout<< *(&a)<<endl;  //bracket hata bhi skte ho
    cout<< ptr<<endl;
    cout<< *ptr<<endl; //*&a=*ptr

    *ptr=20;
    cout<<a;

    return 0; 
}