#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

bool isSafe(int i,int j,int row,int col,int arr[][3],vector<vector<bool>>&visited){
    if(((i>=0 && i<row)&& (j>=0 && j <col)) && 
     (arr[i][j]==1)  &&  visited[i][j]==false ){

        return true;
     }
     else{
        return false;
     }
}


void solveMaze(int arr[][3],int row,int col,int i,int j,vector<vector<bool>>&visited,vector<string>&path,string output){

//BASE CASE
    if(i==row-1 && j==col-1){
        path.push_back(output);
        return ;
    }

//DOWN(i+1,j)
   if(isSafe(i+1,j,row,col,arr,visited)){
    visited[i+1][j]=true;
    solveMaze(arr,row,col,i+1,j,visited,path,output+'D');

//BACKTRACKING
    visited[i+1][j]=false;       
   }


//LEFT(i,j-1)
if(isSafe(i,j-1,row,col,arr,visited)){
    visited[i][j-1]=true;
    solveMaze(arr,row,col,i,j-1,visited,path,output+'L');
//BACKTRACKING
    visited[i][j-1]=false;
} 


//RIGHT(i,j+1)
if(isSafe(i,j+1,row,col,arr,visited)){
    visited[i][j+1]=true;
    solveMaze(arr,row,col,i,j+1,visited,path,output+'R');
//BACKTRACKING
    visited[i][j+1]=false; 
}


//UP(i-1,j)
if(isSafe(i-1,j,row,col,arr,visited)){
    visited[i-1][j]=true;
    solveMaze(arr,row,col,i-1,j,visited,path,output+'U');
//BACKTRACKING
    visited[i-1][j]=false; 
}
}

int main(){

    int maze[3][3]={{1,0,0},
                    {1,1,0},
                    {1,1,0}};

    if(maze[0][0]==0){
        cout<<"no path exists"<<endl;
        return 0;
    }                      
    int row=3;
    int col=3;
    vector<vector<bool>>visited(row,vector<bool>(col,false));

//SOURCE KI VALUE KO TRUE MARK KR DETE HAI
    visited[0][0]=true;   

    vector<string>path;
    string output="";

    solveMaze(maze,row,col,0,0,visited, path,output);

    cout<<"Printing results "<<endl;

    for(auto val:path){
        cout<<val<<" ";
    } 

    if(path.size()==0){
        cout<<"no path exists"<<endl;
    }      

         
    cout<<endl;

   return 0;
}