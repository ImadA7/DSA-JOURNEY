#include<iostream>  //find permutation
using namespace std;
#include<string>
#include<vector>

void PrintBoard(vector<vector<char>> board, int row){
    int n=board.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Nqueens(vector<vector<char>> board, int row){
    int n= board.size();
    if(row==n){
        PrintBoard(board);
        return;
    }
    for(int j=0;j<n;j++){
        if(issafe(board,row,j)){
            board[row][j]='Q';
            Nqueens(board,row+1);
            board[row][j]='.';

        }
    }
}


int main(){
    vector<vector<char>> board;
    int n=2;
    for(int i=0;i<n;i++){
        vector<char> NewRow;
        for(int j=0;j<n;j++){
            NewRow.push_back('.');
        }
        board.push_back(NewRow);
    }
    
}