#include<bits/stdc++.h>
using namespace std;

// int kthSmallest(int a[],int n,int k){
    
//     priority_queue<int>pq;

//     for(int i=0;i<k;i++){
//         pq.push(a[i]);
//     }

//     for(int i=k;i<n;i++){
//         int element=a[i];
//         if(element<pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     return pq.top();
// }

int kthGreatest(int a[],int n,int k){
    
    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=0;i<k;i++){
        pq.push(a[i]);
    }

    for(int i=k;i<n;i++){
        int element=a[i];
        if(element>pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
}

int main(){
    int a[]={20,5,4,10,8};
    int n=5;
    int k=2;
    // int ans=kthSmallest(a,n,k);
    int ans=kthGreatest(a,n,k);

    // cout<<k<<"th smallest is : "<<ans<<endl;
    cout<<k<<"th greatest is : "<<ans<<endl;


    return 0;
}