#include<bits/stdc++.h>
#include<limits.h>

using namespace std;


int partitionLogic(int *arr,int s,int e){

//STEP 1: CHOOSE PIVOT ELEMENT
    int pivotIndex=s;
    int pivotElement=arr[s];

//STEP 2: FIND RIGHT POSITION FOR PIVOT ELEMENT AND PLACE IT THERE    
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=arr[pivotIndex]){
            count++;
        }
        }

//JAB MAI LOOP SE BAHAR AAYA TO MERA RIGHT PIVOT INDEX READY HAI 
     int rightIndex=s+count;
     swap(arr[pivotIndex],arr[rightIndex]);
     pivotIndex=count+s;

//STEP 3: LEFT ME CHOTE AND RIGHT ME BADE
int i=s;
int j=e;

while(i<pivotIndex && j>pivotIndex){
    while(arr[i]<=pivotElement){              
        i++;
    }
   while(arr[j]>pivotElement){
        j--;
    }
}

//2 CASE HO SKTE HAI
//A. YOU FOUND NO ELEMENTS TO SWAP
//B. ELEMENT FOUND TO SWAP

if(i<pivotIndex && j>pivotIndex){
    swap(arr[i],arr[j]);
}

return pivotIndex;
}
void quickSort(int arr[],int s,int e){

    if(s>=e)
      return ;

      int p= partitionLogic(arr,s,e);

      quickSort(arr,s,p-1);

      quickSort(arr,p+1,e);
}
int main(){

    int arr[]={8,1,3,4,20,50,5,5,5,30};
    int n=10;

    int s=0;
    int e=n-1;

    quickSort(arr,s,e);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}






// void printPermutation(string &str,int i){

// //BASE CASE
//     if(i>=str.length()){
//         cout<<str<<" ";
//         return;
//     }

//     for(int j=i;j<str.length();j++){

// //SWAP        
//         swap(str[i],str[j]);

// //RECURSIVE CALL
//         printPermutation(str,i+1);

// //BACKTRACKING:- to recreate the original input
//         swap(str[i],str[j]);
//     }
// }

// int main(){

//     string str="abc";
//     int i=0;

//     printPermutation(str,i);



//     return 0;
// }