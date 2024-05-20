#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findMissingElement(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int m=s+(e-s)/2;
    int missingEle=-1;

    while(s<=e){
        if(m+1==v[m]){
            s=m+1;
        }
        else if(m+1<v[m]){
            e=m-1;
            missingEle=v[m]-1;
        }
        m=s+(e-s)/2;
    }
    return missingEle;
}

int main(){

    vector<int>arr{3,4,5,6,7,8};
    int ans=findMissingElement(arr);

    cout<<"Missing element is : "<<ans<<endl;



    return 0;
}