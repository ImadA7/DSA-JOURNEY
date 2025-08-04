#include<iostream>
using namespace std;

//5 video is left and lso see code from old laptop
 
bool linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true; // Found
        }
    }
    return false; // Not found
}

int main(){
    
    int arr[]={10,20,4,30,50,40};
    cout<<linearSearch(arr,6,30);
    return 0;
}