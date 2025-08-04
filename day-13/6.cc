//staircase search method

#include<iostream>
using namespace std;
bool searchMatrix(int matrix[4][4], int n, int m, int target) {
    int i = 0, j = m - 1; // Start from top-right

    while(i < n && j >= 0){
        if(matrix[i][j] == target){
            cout << "Found at: " << i << "," << j << endl;
            return true;
        }
        else if(matrix[i][j] > target){
            j--; // move left
        }
        else{
            i++; // move down
        }
    }

    cout << "Not found" << endl;
    return false;
}

int main(){

    int matrix[4][4] = {
    {10, 20, 30, 40},
    {15, 25, 35, 45},
    {27, 29, 37, 48},
    {32, 33, 39, 50}
};

searchMatrix(matrix, 4, 4, 29); // Output: Found at 2,1


    return 0;
}
