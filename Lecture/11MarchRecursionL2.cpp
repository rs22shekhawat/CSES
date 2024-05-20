#include<bits/stdc++.h>

using namespace std;




// int climbStairs(int n) {
//         if(n==0 || n==1){
//             return 1;
//         }
        
//         int ans= climbStairs(n-1)+climbStairs(n-2);
//         return ans;
        
//     }




// void print(int arr[],int n,int i){
//     //BASE CONDITION
//     if(i>=n){
//         return ;
//     }

//     //1 case solve kr dia
//     cout<<arr[i]<<" ";

//     //RECURSIVE RELATION
//     print(arr,n,++i);
// }



// void findMax(int arr[],int n,int i,int &maxi){

//     if(i>=n){
//         return ;
//     }

//     if(arr[i]>maxi){
//         maxi=arr[i];
//     }

//     findMax(arr,n,i+1,maxi);

// }



// bool checkKey(string &str,int &n,int& i,char& key){

//     if(i>=n){
//         return false ;
//     }

//     if(str[i]==key){
//         return true;
//     }
//     int newi=i+1;
//    bool ans= checkKey(str,n,newi,key);
//     return ans;
// }






void printDigits(int n){

    if(n==0){
        return;
    }
     
    int digit=n%10; 
    printDigits(n/10);

    cout<<digit<<" ";
}


int main(){


    int n=647;

    printDigits(n);









    // string str="lovebabbar";
    // int n=str.length();
    // int i=0;
    // char key='z';

    // bool ans= checkKey(str,n,i,key);

    // cout<<"ans is: "<<ans;







    //  int arr[]={10,20,40,50,30};
    //  int n=5;
    //  int i=0;
    //  int maxi=INT_MIN;
    //  findMax(arr,n,i,maxi);
    //  cout<<"maximum no is "<<maxi;







    // int arr[5]={10,20,30,40,50};
    // int n=5;
    // int i=0;
    // print(arr,n,i);







    // int n;
    // cout<<"Enter no of starirs"<<endl;
    // cin>>n;

    // int ans=climbStairs(n);
    // cout<<ans;
    










    return 0;
}