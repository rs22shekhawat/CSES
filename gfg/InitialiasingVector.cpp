#include<bits/stdc++.h>
#include<vector>

using  namespace std;

int main(){

//1. Initialising by pushing values
// vector<int>v;
// v.push_back(10);
// v.push_back(20);
// v.push_back(30);
// for(int x:v){
//     cout<<x<<" ";
// }


//2. Specifying size and initialising values
// int n=3;
// vector<int>v(n,10);
// for(int x:v){
//     cout<<x<<" ";
// }


//3. Initialising like arrays
// vector<int>v{10,20,30};
// for(int x:v){
//     cout<<x<<" ";
// }


//4. Initialising from arrays
// int arr[]={10,20,30};
// cout<<arr<<" ";
// int n=sizeof(arr)/sizeof(arr[0]);
// vector<int>v(arr,arr+n);
// for(int x:v){
//     cout<<x<<" ";
// }


//5. Initialising from another vector
// vector<int>v1{10,20,30};
// vector<int>v2(v1.begin(),v1.end());
// for(int x:v2){
//     cout<<x<<" ";
// }


//6. Initialising all elements with particular value
// vector<int>v1(10);
// int value=5;
// fill(v1.begin(),v1.end(),value);
// for(int x:v1){
//     cout<<x<<" ";
// }

//7. Initialise an array with consecutive numbers using std::iota
// vector<int>v(5);
// iota(v.begin(),v.end(),1);
// for(int i=0;i<5;i++){
//     cout<<v[i]<<" ";
// }




//2-D pointer array

// int n=5;
// int m=3;
// int ** arr=new int*[n];
// for(int i=0;i<n;i++){
//     arr[i]=new int[m];
// }

// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }



const int x=5;
cout<<x<<endl;

if(x){
    int x=4;
    cout<<x<<endl;
}






return 0;

}