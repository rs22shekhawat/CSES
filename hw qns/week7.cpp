#include<bits/stdc++.h>

using namespace std;

//LAST OCCURENCE OF A CHARACTER IN STRING


// int search(string &str,char& target,int i,int& ans){

//     if(str.empty()){
//         return -1;
//     }

//      if(i>=str.size()){
//         return ans;
//     }

//     if(target==str[i]){
//         ans=i;
//         search(str,target,i+1,ans);

//     }
//     else{
//         search(str,target,i+1,ans);
//     }

// }

// int main(){

//     string str="you are a number one fuck boys";
//     char target='e';
//     int i=0;
//     int ans=-1;

//     search(str,target,i,ans);

//     cout<<"last occurence of target "<<target<<" is "<<ans<<endl;

// }




//REVERSE STRING
// void  reverse(string& str,int start,int end){
//     if(start>end){
//         return ;
//     }
    
//     swap(str[start],str[end]);
    
//     reverse(str,start+1,end-1);

// }


// int main(){

//     string str="Rohit";
//     int start=0;
//     int end=str.size()-1;
   
//     reverse(str,start,end);
//     cout<<"reversed string is "<<str<<endl;
// }




//CHECK PALINDROME


// bool isPalindrome(string& str,int start,int end,bool ans){
//     if(start>end){
//         return true;
//     }

//     if(str[start]==str[end]){
//         ans=isPalindrome(str,start+1,end-1,ans);
//     }
//     else{
//         ans=false;
//         return ans;
//     }
//     return ans;
// }


// int main(){
//     string str="racecarjgfh";
//     int start=0;
//     int end=str.size()-1;
//     bool ans=false;

//     bool is=isPalindrome(str,start,end,ans);

//     if(is){
//         cout<<"it is palindrome"<<endl;
//     }
//     else{
//         cout<<"Not a palindrome"<<endl;
//     }
// }



void printSubarray(vector<int>&nums,int start,int end){

    if(end==nums.size()){
        return ;
    }

    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    printSubarray(nums,start,end+1);
}

void printFull(vector<int>&nums){
    for(int start=0;start<nums.size();start++){
        int end=start;
        printSubarray(nums,start,end);
    }
}

int main(){

    vector<int>nums{1,2,3,4,5};
    printFull(nums);


    return 0;
}

