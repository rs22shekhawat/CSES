#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;






// void  printingRow_WiseSum(int arr[3][3],int rows,int cols){

//     cout<<"printing row wise sum ";
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<endl;
//     }

// }


// void  printingCol_WiseSum(int arr[3][3],int rows,int cols){

//     cout<<"printing column wise sum ";
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+arr[j][i];
//         }
//         cout<<sum<<endl;
//     }

// }

// bool findKey(int arr[][3],int rows,int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int getMax(int arr[][3],int rows,int cols){
//     int maxi=INT_MIN;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]>maxi){
//                 maxi=arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }


// void transpose_fn(int arr[][3],int r,int c, int transpose[3][3]){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             //swap(arr[i][j],arr[j][i]);
//             transpose[j][i]=arr[i][j];
//         }
//     }
// }

// void printArray(int arr[][3],int r,int c){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
// }
// }


// int getMin(int arr[][3],int r,int c){
//     int min=INT_MAX;

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//            if(arr[i][j]<min){
//             min=arr[i][j];
//            }

//         }
//     }
//     return min;
// }


int main(){


//DECLARATION OF VECTOR OF VECTOR
    // vector<vector<int>>arr;

    // vector<int> a{1, 1,5,5};
    // vector<int>b{1,2,3};
    // vector<int>c{5,6};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

//     int row=3;
// int col=5;


// vector<vector<int>>arr(row,vector<int>(col,01));

    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }












// int arr[3][3];
//     int rows=3,cols=3;
//     int transpose[3][3];

//ROW WISE INPUT AND PRINTING
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cin>>arr[i][j];

//     }
// }

// cout<<"Printing Array "<<endl;
// printArray(arr,rows,cols);
// cout<<"Starting Transpose "<<endl;
// transpose_fn(arr,rows,cols,transpose);
// cout<<"Printing Array Again "<<endl;
// printArray(transpose,rows,cols);




// cout<<"Maxi no is "<<getMax(arr,rows,cols);

// cout<<"Mini no is "<<getMin(arr,rows,cols);



// int key=8;
// cout<<findKey(arr,3,3,key);





// cout<<"Printing row wise "<<endl;
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// printingRow_WiseSum(arr,rows,cols);
// printingCol_WiseSum(arr,rows,cols);



   // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   // cout<<arr[2][2];


//ROW-WISE ACCESS
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//    }


//COLUMN-WISE ACCESS
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
//    }








//COLUMN WISE INPUT AND PRINTING
// int arr[3][4];
// int rows=3;
// int cols=3;
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cin>>arr[j][i];

//     }

// }
// cout<<"Printing column wise "<<endl;
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }























    return 0;
}