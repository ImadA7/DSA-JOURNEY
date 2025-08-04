#include<iostream>
using namespace std; //Binary Search

void BinarySearch(int arr[],int size, int key){
    int low=0;
    int high = size-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(key==arr[mid]){
            cout << "Found at index: " << mid;
            return;
        } else if(key<arr[mid]){
            high=mid-1;
            mid= (low+high)/2;
        } else if(key>arr[mid]) {
            low=mid+1;
            mid=(low+high)/2;
        } else {
            cout<<" incorrcet key";
        }
    }
}
 

int main(){
    int arr[5] ={1,2,3,4,5};
    int size=5;
    BinarySearch(arr,size,2);

    
    return 0;
}