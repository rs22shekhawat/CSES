#include<iostream>
#include<vector>
#include<limits.h>
#include<bits/stdc++.h>

using namespace std;





//FIND UNIQUE ELEMENT
// int findUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }


  int main(){



//LEFT ROTATE 
    // int arr[]={1,2,3,4,5};
    // int size=5;
    // int val=arr[0];

    // for(int i=0;i<size;i++ ){
    //     if(i==size-1){
    //         arr[i]=val;
    //     }
    //     else{
    //         arr[i]=arr[i+1];
    //     }
    //         }

    //  for(auto i:arr){
    //     cout<<i<<" ";
    //  }       



   //SORT 0 AND 1       
    // vector<int>arr{0,0,0,1,1,0,0,0,1,0};
    // int start =0;
    // int end=arr.size()-1;
    // int i=0;

    // while(i!=end){
    //     if(arr[i]==0){
    //         swap(arr[start],arr[i]);
    //         start++;
    //         i++;
    //     }
    //     else{
    //         swap(arr[end],arr[i]);
    //         end--;
    //     }
    // }

    // for(auto val:arr){
    //     cout<<val<<" ";
    //  }



//    OR

    //  vector<int>arr{0,0,1,0,0,0,0,1,0};
    // int start =0;
    // int end=arr.size()-1;
    // int i=0;

    // while(start<=end){
    //     if(arr[start]==0){
    //         swap(arr[start],arr[start]);
    //         start++;
    //     }
    //     else{
    //         swap(arr[end],arr[start]);
    //         end--;
    //     }
    // }

    // for(auto val:arr){
    //     cout<<val<<" ";
    //  }










    //TRIPLET SUM
    // vector<int>arr{10,20,30,40,50,60,70,80};
    // int sum=80;

    // for(int i=0;i<arr.size();i++){
    //     int element1=arr[i];
    //     for(int j=i+1;j<arr.size();j++){
    //         int element2=arr[j];
    //         for(int k=j+1;k<arr.size();k++){
    //             int element3=arr[k];
    //             if(element1+element2+element3==sum){
    //                 cout<<"("<<element1<<","<<element2<<","<<element3<<")"<<endl;
    //             }
    //         }
    //     }
    // }
    






    //PAIR SUM
    // vector<int>arr{10,20,40,60,70};
    // int sum=80;

    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];
    //     for(int j=i+1;j<arr.size();j++){
    //         if(element+arr[j]==sum)
    //         cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //     }
    // }







//UNION WITH DUPLICATES
    // vector<int>arr{1,2,4,6,8,10};
    // vector<int>brr{3,5,4,6};

    // vector<int>ans;

    // for(int i=0;i<arr.size();i++){
    //     ans.push_back(arr[i]);
    //     }
    //     for(int i=0;i<arr.size();i++){
    //         int value=arr[i];
    //         for(int j=0;j<brr.size();j++){
    //             if(value==brr[j]){
    //                 brr[j]=INT_MIN;
    //             }
    //         }
    //     }
    //     for(int j=0;j<brr.size();j++){
    //         if(brr[j]!=INT_MIN){
    //             ans.push_back(brr[j]);
    //         }
    //     }
    

    // for(auto value:ans){
    //     cout<<value<<" ";
    // }









    //INTERSECTION OF 2 ARRAYS 
    // vector<int>arr{1,2,3,4,6,8};
    // vector<int>brr{3,3,4,10};

    // vector<int>ans;

    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];
    //     for(int j=0;j<brr.size();j++){
    //         if(element==brr[j]){
    //            brr[j]=-1;
    //            ans.push_back(element);
    //            element=-1;
    //         }
    //     }
    // }

    // for(auto value:ans){
    //     cout<<value<<" ";
    // }







    //INTERSECTION OF 2 ARRAYS(NO REPETION OCCURS)
    // vector<int>arr{1,3,4,5,7,9};
    // vector<int>brr{3,4,6};

    // vector<int>ans;

    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];
    //     for(int j=0;j<brr.size();j++){
    //         if(element==brr[j]){
    //             ans.push_back(element);
    //         }
    //     }
    // }

    // for(auto value:ans){
    //     cout<<value<<" ";
    // }



    


    //WHEN BOTH ARRAY CONTAINS ALL DIFFERENT ELEMENTS(UNION)
    // int arr[]={1,3,5,7,9};
    // int sizea=5;
    // int brr[]={2,4,6,8};
    // int sizeb=4;

    // vector<int>ans;

    // for(int i=0;i<sizea;i++){
    //     ans.push_back(arr[i]);
    // }

    // for(int i=0;i<sizeb;i++){
    //     ans.push_back(brr[i]);
    // }

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }






//FIND UNIQUE ELEMENT
//     int n;
//     cout<<"Enter no of elements "<<endl;
//     cin>>n;
//     vector<int>arr(n);

//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }

//     int UniqueElement= findUnique(arr);

//     cout<<"Unique element is :"<<UniqueElement;






   //  vector<int>arr;

//     //COMPILER DEPENDENT
    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;
     
//     //INSERT
//     arr.push_back(5);
//     arr.push_back(6);

//    //PRINT
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     //REMOVEl
//      arr.pop_back();

//     //PRINT
//      for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     //CAPACITY WILL BE ZERO WHEN EXPLICITLY DEFINE NUMBER OF ELEMENTS

    // int n;
    // cout<<"Enter no of elements "<<endl;
    // cin>>n;

    // vector<int>brr(n,-1);
    // cout<<"size of brr "<<brr.size()<<endl;
    // cout<<"capacity of brr "<<brr.capacity()<<endl;

    // for(int i=0;i<brr.size();i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;

    // vector<int>crr{10,20,30,40};

    // for(int i=0;i<crr.size();i++){
    //     cout<<crr[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"vector crr is empty or not: "<<crr.empty()<<endl;
    

    // vector<int>drr;
    // cout<<"vector drr is empty or not: "<<drr.empty()<<endl;
    
    return 0;
}