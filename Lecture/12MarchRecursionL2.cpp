#include<bits/stdc++.h>
using namespace std;






    //SORTED OR NOT BY RECURSION

// bool checkSorted(vector<int>&arr,int &n ,int &i){

//     if(i==n-1){
//         return true;
//     }

//     if(arr[i+1]<arr[i]){
//         return false;
//     }

//     return checkSorted(arr,n,++i);

// }





//FIND INDEX OF A KEY IN AN ARRAY

// int binarySearch(vector<int>&arr,int s,int e,int target){
    
//     int mid=(s+e)/2;

//     if(s>e){
//         return -1;
//     }

//     if(arr[mid]==target){
//         return mid;
//     }

//     if(arr[mid]<target){
//         return binarySearch(arr,mid+1,e,target);
//     }
//     else{
//         return binarySearch(arr,s,mid-1,target);
//     }

// }






void printSubSequences(string str,string output,int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }

    //EXCLUDE
    printSubSequences(str,output,i+1);

    //INCLUDE
    output.push_back(str[i]);
    printSubSequences(str,output,i+1);
}


int main(){



string str="abc";
string output="";
int i=0;

printSubSequences(str,output,i);







//FIND INDEX OF A KEY IN AN ARRAY

// vector<int>v{10,20,40,60,70,90,99};
// int n=v.size();
// int s=0;
// int e=n-1;
// int target=99;


// int ans=binarySearch(v,s,e,target);
// cout<<"ans is "<<ans;







//SORTED OR NOT BY RECURSION

    // vector<int>v{10,20,30,15,50};
    // int n=v.size();
    // int i=0;

    // bool isSorted=checkSorted(v,n,i);

    // if(isSorted){
    //     cout<<"Array is Sorted "<<endl;
    // }
    // else{
    //     cout<<"Array is not Sorted "<<endl;
    // }
      








    return 0;
}