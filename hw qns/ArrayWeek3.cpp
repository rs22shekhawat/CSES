#include<iostream>
#include<bits/stdc++.h>

using namespace std;


//SORT 3 COLORS  

    // int sortColors(vector<int>& nums) {
    //     int zeros,ones,twos;
    //     zeros=ones=twos=0;
        
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==0){
    //             zeros++;
    //         }
    //         else if(nums[i]==1){
    //             ones++;
    //         }
    //         else{
    //             twos++;
    //         }
    //     }

    //     int i=0;
    //     while(zeros--){
    //         nums[i]=0;
    //         i++;
    //     }
    //     while(ones--){
    //         nums[i]=1;
    //         i++;
    //     }
    //     while(twos--){
    //         nums[i]=2;
    //         i++;
    //     }

    //     return nums[0];
    //      }



// DUTCH NATIONAL FLAG ALGO
//MOVE NEGATIVE NUMBERS TO LEFT SIDE 

    // int moveAllNegToOneSide(int a[],int n){
    //     int l=0;
    //     int h=n-1;
    //     while(l<=h){
    //         if(a[l]<0){
    //             l++;
    //         }
    //         else if(a[h]>0){
    //             h--;
    //         }
    //         else{
    //             swap(a[l],a[h]);
    //         }
    //     }
    //     return a[n];
    // }

    


    int moveAllNegToOneSide(int a[],int n){
        int l=0;
        int h=n-1;
        while(l<=h){
            if(a[l]<0){
                // swap(a[l],a[l]);
                l++;
            }
            else {
                swap(a[l],a[h]);
                h--;
            }
            
        }
        return a[n];
    }





    void findMissing(int a[],int n){
        for(int i=0;i<n;i++){
           int index=abs(a[i]);
           if(a[index-1]>0){
            a[index-1] *=-1;
           }
        }

        for(int  i=0;i<n;i++){
            if(a[i]>0){
                cout<<i+1<<" ";
            }
        }
 }
 



void wavePrint(vector<vector<int>>v)
{
    int n=v.size();
    int m=v[0].size();

    for(int startCol=0;startCol<m;startCol++){
        
        if((startCol & 1)==0){
            for(int i=0;i<n;i++){
              cout<<v[i][startCol]<<" ";
            }
                   }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<v[i][startCol]<<" ";
            }

        }
    }
}







int main(){


    

   





    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    wavePrint(v);





//FIND MISSING

// int a[]={1,2,3,5,6,7,2};
// int n=sizeof(a)/sizeof(int);

// findMissing(a,n);






// DUTCH NATIONAL FLAG ALGO
//MOVE NEGATIVE NUMBERS TO LEFT SIDE 

// int a[]={3,-3,5,6,-2,-7};
// int n=sizeof(a)/sizeof(int);
// moveAllNegToOneSide(a,n);

// for(auto val:a){
//     cout<<val<<" ";
// }





//SORT 3 COLORS    

    // vector<int>nums{0,2,1,2,1,0};
    // sortColors(nums);
    // vector<int>ans=nums;

    // for(auto val:ans){
    //     cout<<val<<" ";
    // }a






    return 0;

}