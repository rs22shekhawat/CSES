#include<bits/stdc++.h>
#include<limits.h>

using namespace std;


     // MINIMUM NO OF ELEMENTS TO REACH TARGET SUM

// int solve(vector<int>&arr,int target){
//      if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }
//     int mini=INT_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans=solve(arr,target-arr[i]);
        
//         if(ans!=INT_MAX){
//             mini=min(mini,ans+1);
//         }
//         }
//      return mini;
//     }




   //CUT INTO MAXIMUM SEGMENTS

// int solve(int n,int x,int y,int z){
//     if(n<0){
//         return INT_MIN;
//     }
//     if(n==0){
//         return 0;
//     }

//     int ans=0;
//     int a=solve(n-x,x,y,z)+1;
//     int b=solve(n-y,x,y,z)+1;
//     int c=solve(n-z,x,y,z)+1;

//     ans=max(a,max(b,c));

//     return ans;
// }





   //MAXIMUM SUM OF NON ADJACENT ELEMENTS

// void solve(vector<int>&arr,int i,int sum,int &maxi){
//     if(i>=arr.size()){
//         maxi=max(sum,maxi);
//         return ;
//     }

//     solve(arr,i+2,sum+arr[i],maxi);

//     solve(arr,i+1,sum,maxi);
// }




int main(){


 //MAXIMUM SUM OF NON ADJACENT ELEMENTS

    // vector<int>arr{2,1,4,9};
    // int i=0;
    // int maxi=INT_MIN;
    // int sum=0;

    // solve(arr,i,sum,maxi);

    // cout<<"Maximum sum is: " <<maxi<<endl;






    //CUT INTO MAXIMUM SEGMENTS

    // int n=7;
    // int x=1;
    // int y=2;
    // int z=2;

    // int ans=solve(n,x,y,z);
    // if(ans<0)
    //   ans=0;

    //   cout<<"Answer is: "<<ans;





    // MINIMUM NO OF ELEMENTS TO REACH TARGET SUM

//    vector<int>arr{1,2};
//    int target=3;

//    int ans=solve(arr,target);
//    cout<<"Answer is: "<<ans<<endl;
   
   return 0;
}