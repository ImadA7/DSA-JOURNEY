
#include<iostream>  //input and output 2d array
using namespace std;

int main(){
    int arr[2][2];
    int n = 2, m = 2;

    cout << "Enter elements of 2D array:" << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        
//     This loop runs over rows.
// First it runs for i = 0 (1st row)
// Then i = 1 (2nd row)
// Each time, it goes to the next row.

        for(int j=0;j<m;j++){
// This loop runs over columns of the current row.
// So:
// When i = 0, it runs j = 0 and j = 1 → prints arr[0][0] and arr[0][1]
// When i = 1, it runs j = 0 and j = 1 → prints arr[1][0] and arr[1][1]


            cout<<arr[i][j]<<",";
        }
    }


    return 0;
}

