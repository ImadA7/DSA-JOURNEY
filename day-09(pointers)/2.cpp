#include<iostream> //address of operator
using namespace std;
int main()  {
    int a=10;
    int *ptr=&a;

    int **pptr= &ptr;
    cout<< &ptr <<"="<<pptr <<endl;
    cout<<ptr;


    return 0; 
}