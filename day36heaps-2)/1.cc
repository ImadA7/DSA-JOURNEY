#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void heapify(int i, vector<int> &arr, int n){
    int maxI = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
 
    if(left < n && arr[left] > arr[maxI]){
        maxI = left;
    }
    if(right < n && arr[right] > arr[maxI]){
        maxI = right;
    }
    if(maxI != i){
        swap(arr[i], arr[maxI]);
        heapify(maxI, arr, n);
    }
}

void heapSort(vector<int> arr){
    int n = arr.size();
    //step-1
    for(int i = n / 2 - 1; i >= 0; i--){
        heapify(i,arr, n);
    }
    //step-2
    for(int i = n - 1; i >= 0; i--){
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}

int main() {
    vector<int> arr = {1,4,2,5,3};
    heapSort(arr);
    return 0;
}