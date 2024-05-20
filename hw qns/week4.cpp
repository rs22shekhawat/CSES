#include<bits/stdc++.h>

using namespace std;



bool isPossibleSolution(vector<long long int>&trees,long long int m,long long int mid){
    long long int woodCollected=0;
    for(int i=0;i<trees.size();i++){
        if(trees[i]>mid){
            woodCollected+=trees[i]-mid;
        }
    }
    return woodCollected>=m;
}


 long long int maxSawBladeHeight(vector<long long int>&trees,long long int m){

  long long start,end,ans=-1;
  start=0;
  end=*max_element(trees.begin(),trees.end());

  while(start<=end){
    long long int mid=start+(end-start)/2;

    if(isPossibleSolution(trees,m,mid)){
        ans =mid;
        start=mid+1;
    }
    else{
        end=mid-1;
    }

  }
  return ans;

 }


  int main(){
    long long int m,n;
    cin>>n>>m;
    vector<long long int>trees;

    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }

    cout<<maxSawBladeHeight(trees,m)<<endl;


    return 0;
  }


// int bs(int arr[],int s,int e,int x){
//     int m=(s+e)/2;
//     while(s<=e){
//         if(arr[m]==x)
//           return m;
//         else if(arr[m]>x)
//           e=m-1;
//         else  
//           s=m+1;

//     m=(s+e)/2;        
//     }

//     return -1;
// }


// int expSearch(int arr[],int n,int x){
//     if(arr[0]==x){
//         return 0;
//     }

//     int i=1;
//     while(i<n && arr[i]<=x){
//         i=i*2;
//     }

//     return bs(arr,i/2,min(i,n-1),x);
// }

// int main(){

//     int arr[]={3,4,5,6,11,13,14,15,56,70};
//     int n=sizeof(arr)/sizeof(int);
//     int x=13;
//     int ans=expSearch(arr,n,x);
//     cout<<ans<<endl;



//     return 0;
// }