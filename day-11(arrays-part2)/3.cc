#include <iostream>  //kadanes algorithm
#include <climits>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int currsum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++){
        currsum += arr[i];
        if(currsum > maxSum){
            maxSum = currsum;
        }

        if(currsum < 0){
            currsum = 0; // reset if sum goes negative
        }
    }

    cout << "Max Subarray Sum: " << maxSum << endl;
}
