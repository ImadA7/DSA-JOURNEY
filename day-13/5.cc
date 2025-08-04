#include<iostream> //sum of diagonal elements (optimised)
using namespace std;
//given n=m
int diagonalSum(int matrix[3][3], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=matrix[i][i];//pd
        if(i!=n-i-1){
            sum+= matrix[i][n-i-1];//sd
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