#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;


//BASIC OF BINARY SEARCH

// int binarySearch(int arr[],int size,int target){

//     int start=0;
//     int end=size -1;
//     int mid=(start+end)/2;

//     while(start<=end){
//         int element=arr[mid];
        
//         if(target==arr[mid]){
//             return mid;
//         }
//         else if(target<element){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }

//         mid=(start+end)/2;
//     }

//     return -1;

// }



//FIRST OCCURENCE OF AN ELEMENT
// int firstOccurence(vector<int>arr,int target){
//     int start=0;
//     int end=arr.size()-1;
//     int ans=-1;
//     int mid=(start+end)/2;

//     while(start<=end){
//         if(target==arr[mid]){
//             ans=mid;
//             end=mid-1;
//           }
//          else if(target<arr[mid]){
//             end=mid-1;
//          } 
//          else{
//             start=mid+1;
//          }
//          mid=(start+end)/2;
//     }
//     return ans;
// }



//LAST OCCURENCE OF AN ELEMENT

// int lastOccurence(vector<int>arr,int target){
//     int start=0;
//     int end=arr.size()-1;
//     int ans=-1;
//     int mid=start+(end-start)/2;

//     while(start<=end){
//         if(target==arr[mid]){
//             ans=mid;
//             start=mid+1;
//           }
//          else if(target<arr[mid]){
//             end=mid-1;
//          } 
//          else if(target>arr[mid]){
//             start=mid+1;
//          }
//          mid=start+(end-start)/2;
//     }
//     return ans;
// }



//PEAK ELEMENT IN ARRAY
int maximumElement(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    

    while(s<e){
        
        if(arr[mid]<arr[mid+1] && mid<=size){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    return arr[s];
}




 int main(){

//PEAK ELEMENT IN ARRAY

    int arr[]={1,2,3,10,5,2};
    int size=4;

    int peak= maximumElement(arr,size);
    cout<<"Peak is "<<peak;




//FIRST OCCURENCE OF AN ELEMENT BY USING IN BUILT FUNCTION

    // vector<int>arr{1,2,2,2,3,3,4,4,5,6};
    // int target=4;

    // auto ans2=lower_bound(arr.begin(),arr.end(),target);
    // cout<<"ans2 is "<<ans2-arr.begin();




//LAST OCCURENCE OF AN ELEMENT
    // vector<int>arr{1,2,2,2,3,3,4,4,5,6};
    // int target=2;

    // int indexOfLastOccu= lastOccurence(arr,target);
    // cout<<"ans is "<<indexOfLastOccu;

    


//FIRST OCCURENCE OF AN ELEMENT
    // vector<int>arr{1,2,2,2,3,3,4,4,5,6};
    // int target=2;

//     int indexOfFirstOccu= firstOccurence(arr,target);
//     cout<<"ans is "<<indexOfFirstOccu;

    // cout<<"Total No of Occurrences: "<<indexOfLastOccu-indexOfFirstOccu+1;





//BY ARRAY

    // int arr[]={1,2,3,4,5};
    // int size=5;

    // if(binary_search(arr,arr+size,5)){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not";
    // }




//PRE DEFINED BINARY SEARCH FUNCTION(DON'T USE MOSTLY)    

// vector<int>v{1,2,3,5,4,6};

// if(binary_search(v.begin(),v.end(),30)){
//     cout<<"found";
// }
// else{
//     cout<<"Not found";
// }




//BASIC OF BINARY SEARCH

    // int arr[]={2,4,6,8,10,12,16};
    // int size=7;
    // int target=7;

    // int indexoftarget= binarySearch(arr,size,target);

    // if(indexoftarget==-1){
    //     cout<<"Element not found ";
    // }
    // else{
    //     cout<<"Element fount at index "<<indexoftarget;
    // }




return 0;
}