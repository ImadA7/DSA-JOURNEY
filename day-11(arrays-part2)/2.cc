#include<iostream>//max subarray sum (brute force)
#include<climits> 
using namespace std;

void maxSubarraySumBrute(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int sum = 0;
            for(int i = start; i <= end; i++){
                sum += arr[i];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << "Max subarray sum (Brute): " << maxSum << endl;
}

int main(){
    int arr[5] = {1, -2, 3, 4, -1};
    int n = 5;
    maxSubarraySumBrute(arr, n);
    return 0;
}
