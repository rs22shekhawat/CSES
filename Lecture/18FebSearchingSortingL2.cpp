#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;


//FIND PIVOT ELEMENT
// int findPivot(vector<int>arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if( mid-1>=0 && arr[mid]<arr[mid-1]){
//             return arr[mid-1];
//         }
//         if((mid+1>arr.size()-1) && arr[mid]>arr[mid+1]){
//             return arr[mid];
//         }
//         if(arr[s]>=arr[mid]){
//             e=mid-1;
//         }
//         else if(arr[s]<arr[mid]){
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }




//SQUARE ROOT OF A NUMBER USING BINARY SEARCH

// int findSqrt(int n){
//     int s=0;
//     int e=n;
//     int target =n;
//     int ans;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(mid*mid==target){
//             return mid;
//         }
//         if(mid*mid>target){
//             e=mid-1;
//         }
//         else if(mid*mid<target){
//             ans=mid;
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }


// bool binarySearch(int arr[][4],int rows ,int cols,int target){
//     int s=0;
//     int e=rows*cols-1;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         int rowIndex=mid/cols;
//         int colIndex=mid%cols;

//         if(arr[rowIndex][colIndex]==target){
//             cout<<"Found at "<<rowIndex << " "<<colIndex<<endl;
//             return true;
//         }
//         if(arr[rowIndex][colIndex]<target){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return false;
// }


int main(){


    // int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16,},{17,18,19,20}};
    // int rows=5;
    // int cols=4;
    // int target=19;
    
    // bool ans= binarySearch(arr,rows,cols,target);

    // if(ans){
    //     cout<<"Found ";
    // }
    // else
    //  cout<<"Not Found ";












//SQUARE ROOT OF A NUMBER USING BINARY SEARCH

    // int n;
    // cout<<"Enter a number "<<endl;
    // cin>>n;
    // int ans= findSqrt(n);

    // cout<<"Squart root is "<<ans<<endl;
    
    // int precision;
    // cout<<"Enter precision "<<endl;
    // cin>>precision;
    //  double finalAns=ans;
    // double step=0.1;

    // for(int j=0;j<precision;j++){
    //      for(double j=ans;j*j<=n;j=j+step){
    //      finalAns=j;
    // }
    // step=step/10;
    // }
    // cout<<"Exact square root is "<<finalAns;
   




//FIND PIVOT ELEMENT
    // vector<int>arr{3,4,5,6,7,1,2};
    // int ans=findPivot(arr);
    // cout<< "Pivot element is "<<ans;



 return 0;
}