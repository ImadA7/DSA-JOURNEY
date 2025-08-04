#include <iostream>  //counting sort
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

void countingSort(int arr[], int n) {
    const int RANGE_SIZE = 100000;
    int freq[RANGE_SIZE] = {0}; // Initialize frequency array with zeros
    int minVal = INT_MAX, maxVal = INT_MIN;

    // 1st step - O(n)
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 2nd step - O(range) = max - min
    int j = 0;
    for (int i = minVal; i <= maxVal; i++) {
        while (freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main() {
    int arr[7] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
    countingSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}