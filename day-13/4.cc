#include<iostream> //sum of diagonal elements 
using namespace std;
//given n=m
int diagonalSum(int matrix[3][3], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=matrix[i][j];
            } else if(j==n-i-1){
                sum+=matrix[i][j];
            }
        }
    }
    cout<<" sum : "<<sum<<endl;
    return sum;
}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    diagonalSum(matrix,3);

    
    return 0;
}