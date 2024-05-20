#include<iostream>
#include<string.h>
#include<string>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;



//REMOVING ALL ADJACENT DUPLICATES   

//  string removeDuplicates(string s) {
        
//         string str="";
//         int i=0;
        
//         while(i<s.length()){
            
//             if(str.length()>0){
//                 if(str[str.length()-1]==s[i]){
//                     str.pop_back();
//                 }
//                 else{
//                     str.push_back(s[i]);
//                 }
//             }
//             else{
//                  str.push_back(s[i]);
//              }   
            
//             i++;
//         }
//         return str;
//     }




//REMOVE ALL OCCURENCES OF A SUBSTRING

//  string removeOccurrences(string s, string part) {
        
//         int found=s.find(part);
        
//         while(found!= string::npos){
//             s.erase(s.find(part),part.length());
//             found=s.find(part);
//         }
//         return s;
        
//     }


//VALID PALINDROME II

//  bool checkPalindrome(string s,int i,int j){
        
//         while(i<=j){
//             if(s[i]!=s[j]){
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }
    
//     bool validPalindrome(string s) {
//         int i=0;
//         int j=s.length()-1;
        
//         while(i<=j){
//             if(s[i]!=s[j]){
                
//                 return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
//             }
//             else{
//                 i++;
//                 j--;
//             }
           
//         }
//          return true;
        
//     }






//MINIMUM TIME DIFFERENCE

    // int findMinDifference(vector<string>& timePoints) {
        
    //     vector<int>minutes;
        
    //     for(int i=0;i<timePoints.size();i++){
    //         string curr=timePoints[i];
            
    //         int hours=stoi(curr.substr(0,2));
    //         int minute=stoi(curr.substr(3,2));
            
    //         int totalMinutes=hours*60+minute;
    //         minutes.push_back(totalMinutes);
    //     }
        
        
    //   sort(minutes.begin(),minutes.end());
    
    // int mini=INT_MAX;
    // int n=minutes.size();
    
    // for(int i=0;i<n-1;i++){
    //     int diff=minutes[i+1]-minutes[i];
    //     mini=min(mini,diff);
    // }
    
    // int lastDiff= (minutes[0]+1440)-minutes[n-1];
    // mini=min(mini,lastDiff);
    
    // return mini;
       
    // }







//TOTAL PALINDROME SUBSTRINGS

    int expandAroundIndex(string s,int i,int j){
        int count=0;
        
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    
    int countSubstrings(string s) {
        int count=0;
        int n=s.length();
        
        for(int center=0;center<n;center++){
            
            int oddKaAns= expandAroundIndex(s,center,center);
            count=count+oddKaAns;
            
            int evenKaAns= expandAroundIndex(s,center,center+1);
            count=count+evenKaAns;
            
        }
        return count;
    }


int main(){



//TOTAL PALINDROME SUBSTRINGS

string s="noon";
cout<<countSubstrings(s);







//MINIMUM TIME DIFFERENCE

    // vector<string>timePoints{"23:59","00:00"};
    // cout<<findMinDifference(timePoints);
    


   



    //VALID PALINDROME II

// string s="leverl";
// cout<<validPalindrome(s);





//REMOVE ALL OCCURENCES OF A SUBSTRING

    // string s="daabcbaabcbc";
    // string part="abc";
    // s=removeOccurrences(s,part);
    // cout<<s;





//REMOVING ALL ADJACENT DUPLICATES    

//     string s="abbaca";
//    s= removeDuplicates(s);
//     cout<<s;





 return 0;

}