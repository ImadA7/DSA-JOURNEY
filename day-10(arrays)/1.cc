#include<iostream>
using namespace std;


int a[3]; // Contains garbage like 423424, -3, etc.


int main(){
    int arr[10]={2,4,5,5,5};
    cout<<arr[6]<<endl; 
    cout<<arr[3]<<endl;
    cout<<arr[0]<<endl; //arr[0]=*arr
    cout<<arr[1]<<endl; //arr[1]=*(arr+1)
    arr[2]=50;//it modified the 2nd index to 50
    cout<<arr[2]<<endl;
}