#include<bits/stdc++.h>
using namespace std;


void merge(int* a,int s,int e){
    int m=(s+e)/2;
    int len1=m-s+1;
    int len2=e-m;
    int* left=new int[len1];
    int* right=new int[len2];

    
    

    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=a[k++];
    }
    k=m+1;
    for(int i=0;i<len2;i++){
        right[i]=a[k++];
    }


    int leftIndex=0;
    int rightIndex=0;
    
    int mainIndex=s;

    while(leftIndex<len1 && rightIndex<len2){
          if(left[leftIndex]<=right[rightIndex]){
            a[mainIndex++]=left[leftIndex++];
          }
          else{
            a[mainIndex++]=right[rightIndex++];
          }
    }

    while(leftIndex<len1){
        a[mainIndex++]=left[leftIndex++];
    }
    while(rightIndex<len2){
        a[mainIndex++]=right[rightIndex++];
    }


}


void mergeSort(int* a,int s,int e){
    if(s>=e)
      return ;

    int m=(s+e)/2 ;

    mergeSort(a,s,m);

    mergeSort(a,m+1,e);

    merge(a,s,e); 
}

int main(){
    int a[]={38,27,43,3,9,20,3,3,38};
    int n=9;
    int s=0;
    int e=n-1;

    mergeSort(a,s,e);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}