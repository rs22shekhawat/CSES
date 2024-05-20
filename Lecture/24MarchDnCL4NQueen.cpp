#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

void printSolution(vector<vector<char>> &board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int row,int col,vector<vector<char>> &board,int n){
    int i=row;
    int j=col;

//CHECK LEFT ROW
    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }

//CHECK UPPER LEFT DIAGONAL
     i=row;
     j=col;  
    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    } 

//CHECK BOTTOM LEFT DIAGONAL
     i=row;
     j=col;
    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }  

//IF ALL ABOVE CONDITIONS CHECKED 
    return true;    
}



void solve(vector<vector<char>> &board,int col,int n){
//BASE CASE
    if(col>=n){
        printSolution(board,n);
        return ;
    } 

    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
//RAKH DO            
            board[row][col]='Q';
//RECURSION SOLUTION LAEGA   
            solve(board,col+1,n);
//BACKTRACKING
            board[row][col]='-';                      
        }
    }   
}

int main(){
    int n=4;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col=0;

    solve(board,col,n);

    return 0;
}