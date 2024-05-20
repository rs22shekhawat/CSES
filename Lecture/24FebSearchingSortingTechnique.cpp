#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;


int main(){

  



//SORT BY PRE DEFINED FUNCTION

    // vector<int>arr{10,1,7,6,14,9};
    // sort(arr.begin(),arr.end());

    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }


    



//INSERTION SORT

    // vector<int>arr{10,1,7,6,14,9};
    // int n=arr.size();

    // for(int round=1;round<n;round++){
    //     int val=arr[round];

    //     int j=round-1;
    //     for(;j>=0;j--){
    //         if(arr[j]>val){
    //             arr[j+1]=arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j+1]=val;
    // }

   
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }







//BUBBLE SORT 

    // vector<int>arr{10,1,7,6,14,9};
    //  vector<int>arr{10,11,17,60,140,900};
    // int n=arr.size();

    // for(int round=1;round<n;round++){
    //     bool swapped=false;

    //     for(int j=0;j<n-round;j++){

    //         if(arr[j]>arr[j+1]){
    //             swapped =true;
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    //     if(swapped==false)
    //        break;
    // }

  
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }






//SELECTION SORT

    // vector<int>arr{5,4,3,2,1};
    // int n=arr.size();

    // for(int i=0;i<n-1;i++){
    //     int minIndex=i;

    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[minIndex]){
    //             minIndex=j;
    //         }
    //     }
    //     swap(arr[i],arr[minIndex]);
    // }


    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }





   return 0;
}