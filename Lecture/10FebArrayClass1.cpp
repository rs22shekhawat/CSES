#include<iostream>

#include<limits.h>

using namespace std;

//PASS BY REFERENCE
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void inc(int arr[],int size){
//     arr[0]=arr[0]+10;
//     printArray(arr,size);
// }




//LINEAR SEARCH
// bool find(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//            return true;
//         }
//     }
//     return false;
// }


int main(){

    //REVERSE AN ARRAY
    int arr[]={10,20,30,40,50,60,70,80};
     int size =7;
     int start=0;
     int end=size-1;

     while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
     }
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }

    






    //EXTREME PRINT IN ARRAY
    // int arr[]={10,20,30,40,50,60,70};
    // int size =7;
    // int start=0;
    // int end=size-1;

    // while(start<=end){
    // if(start<end){
    //     cout<<arr[start]<<" "<<arr[end]<<" ";
    //     start++;
    //     end--;
    //     }
    // if(start==end){
    //     cout<<arr[start];
    //     start++;
    //     end--;
    // }
      
        
    //}



     

     //MAXIMUN NUMBER IN AN ARRAY
    //  int arr[]={3,5,6,7,9,0,2,332,53,532,53};
    //  int size=11;
    //  int maxi=INT_MIN;

    //  for(int i=0;i<size;i++){
    //     if(arr[i]>maxi){
    //         maxi=arr[i];
    //     }
    //  }
    //  cout<<"maximum no is "<<maxi;







//COUNT NUMBER OF ZEROS AND ONES
    // int arr[]={0,0,1,0,1,1,0,0,1,0,1,0,1,0,1};
    // int size=15;
    // int numZero=0;
    // int numOne =0;
    // for(int i=0;i<size;i++){
    //     if(arr[i]==0){
            
    //         numZero++;
    //     }
    //     if(arr[i]==1){
    //         numOne++;
    //     }

    // }
    // cout<<"no of zeros are "<<numZero<<endl;
    // cout<<"no of One are "<<numOne;




//LINEAR SEARCH
    // int arr[5]={2,3,4,5,6};
    // int size=5;
    // int key;
    // cout<<"Enter your key ";
    // cin>>key;
    // if(find(arr,size,key)){
    //     cout<<"Found ";

    // }
    // else{
    //     cout<<"Not Found";
    // }






    // int arr[10]={5,4,2,1};
    // cout<<sizeof(arr)/sizeof(int);
    
    
    //PASS BY REFERENCE
    // int arr[]={5,6};
    // int size=2;
    
    // inc(arr,size);

    // printArray(arr,size);

    

//TAKING INPUT AND PRINTING VALUES
    // int n;
    // cout<<"Enter size of array ";
    // cin>>n;
    // int arr[n];
      
    //   for(int i=0;i<n;i++){
    //     cin>>arr[i];

    //   }
    //   for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    //   }



//MAKING ALL VALUES 1
    // int arr[5]={3,5,6,7,8};
    // for(int i=0;i<5;i++){
    //     arr[i]=1;
    //     cout<<arr[i]<<" ";
    // }




//SWAP USING XOR OPERATOR

    // int x=23;
    // int y=34;

    // cout<<"Before swapping "<<"x is "<<x<<" and y is "<<y<<endl;

    // x=x^y;
    // y=x^y;
    // x=x^y;

    // cout<<"After swapping "<<"x is "<<x<<" and y is "<<y<<endl;



    // int a=10;
    // int b=20;
    // int c=a+b;

    // cout<<"Before swapping "<<"a is "<<a<<" and b is "<<b<<endl;

    // a=c-a;
    // b=c-b;
    

    // cout<<"After swapping "<<"a is "<<a<<" and b is "<<b<<endl;



    

      return 0;
}