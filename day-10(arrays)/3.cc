#include<iostream>
using namespace std; //find largest in array


 

int main(){
    int arr[5] = {1, 3, 50, 7, 9};
    int max= arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]> max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}