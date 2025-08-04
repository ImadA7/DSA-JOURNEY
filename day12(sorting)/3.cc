#include<iostream> // Insertion Sort
#include<algorithm> // for swap
using namespace std;

void InsertionSort(int *arr, int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];// Pick a card
        int prev = i - 1;// Start comparing from the left part
        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev],arr[prev+1]);// Shift bigger elements right
            prev--;
        }
        arr[prev + 1] = curr;// Insert card into right spot
    }
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    int n = 5;

    InsertionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
