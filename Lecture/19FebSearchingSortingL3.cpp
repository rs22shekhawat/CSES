#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;




//SEARCH IN A ROTATED AND NEARLY SORTED ARRAY
// int binarySearch(vector<int>arr,int target){

//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(mid+1<=e && arr[mid+1]==target){
//             return mid+1;
//         }
//         if(mid-1>=s&& arr[mid-1]==target){
//             return mid-1;
//         }

//         if(target>arr[mid]){
//             s=mid+2;
//         }
//         else{
//             e=mid-2;
//         }
//         mid=s+(e-s)/2;
//     }
//    return -1;

// }




//DIVISION OF TWO NUMBER USING BINARY SEARCH

// int solve(int dividend,int divisor){
//     int s=0;
//     int e=abs(dividend);
//     int mid=s+(e-s)/2;

//     int ans;
//     while(s<=e){
//         if(abs(mid*divisor)==abs(dividend)){
//             ans= mid;
//             break; 
//         }
//         if(abs(mid*divisor)>abs(dividend)){
//             e=mid-1;
//         }
//         else{
//             ans=mid;
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     if((divisor>0 && dividend>0) || (divisor<0 && dividend<0)){
//         return ans;
//     }
//     else
//     return -ans;
// }




//ODD OCCURENCE OF AN ELEMENT IN AN ARRAY OF PAIRS

// int solve(vector<int>arr){
//     int  s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;

//     while(s<=e){

//         if(s==e){
//             return s;
//         }

//         if(mid%2==0){
//             if(arr[mid]==arr[mid+1]){
//                 s=mid+2;
//             }
//             else{
//                 e=mid;
//             }
//         }
//         else {
//             if(arr[mid]==arr[mid-1]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//          }   
        
//         mid=s+(e-s)/2;
//     }
//     return -1;  
// }







int main(){

//ODD OCCURENCE OF AN ELEMENT IN AN ARRAY OF PAIRS
    // vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    // int ans= solve(arr);

    // cout<<"index is "<<ans<<endl;
    // cout<<"value is "<<arr[ans];











//DIVISION OF TWO NUMBER USING BINARY SEARCH

    // int dividend=-21;
    // int divisor=7;
    // int ans= solve(dividend,divisor);

    // cout<<"Quotienent is "<<ans;





//SEARCH IN A ROTATED AND NEARLY SORTED ARRAY
    // vector<int>arr{10,3,40,20,50,80,70};
    // int target=10;

    // int ans= binarySearch(arr,target);


    // cout<<"Index of "<<target<<" is "<<ans;

    vector<vector<int>>v{{3,3,3},{4,3,5}};
    cout<<v[0].size();




 return 0;
}