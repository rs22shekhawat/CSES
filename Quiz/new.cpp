#include<bits/stdc++.h>
using namespace std;


// int  h(vector<char>&ip,int n,int idx){
    
//     if(idx>=n-1){
//         if(idx==n-1 && ip[idx]=='@')return 1;
//         else 
//           return 0;
//     }
//     if(ip[idx]=='*')return 0;
    
//     int ans1=0;
//     if(ip[idx]=='.'){
//         ans1=max(h(ip,n,idx+1),h(ip,n,idx+2));
//     }
//     else if(ip[idx]=='@'){
//         ans1=1+max(h(ip,n,idx+1),h(ip,n,idx+2));
//     }
    
//     return ans1;
// }
// int main(){
//     // int t;
//     // cin>>t;
    
    
//     int n;
//     cin>>n;
//     vector<char>ip(n);
//     ip[0]='.';
//     for(int i=1;i<n;i++){
//         cin>>ip[i];
//     }
    
    
        
//         int ans=h(ip,n,0);
//         cout<<ans<<endl;
    
//     return 0;
// }











// #include<bits/stdc++.h>
// using namespace std;
 
// void h(vector<int>&ip,int n,vector<int>&ans){
    
//     ans.push_back(ip[0]);
//     for(int i=1;i<n;i++){
//         int t=1;
//         while(ans.back()>=t*ip[i]){
//             t++;
//         }
//         ans.push_back(t*ip[i]);
//     }
//     return ;
    
// }
 
 
// int main(){
   
    
    
//     int n;
//     cin>>n;
    
//     vector<int>ip(n);
//     for(int i=0;i<n;i++){
//         cin>>ip[i];
//     }
    
    
//         vector<int>ans;
        
//         h(ip,n,ans);
//         cout<<ans[ans.size()-1]<<endl;
    
   
//     return 0;
// }









// #include<bits/stdc++.h>
// using namespace std;
 
 
// int  h(vector<char>&ip,int n,int idx){
    
//     if(idx>=n-1){
//         if(idx==n-1 && ip[idx]=='@')return 1;
//         else 
//           return 0;
//     }
//     if(ip[idx]=='*')return 0;
    
//     int ans1=0;
//     if(ip[idx]=='.'){
//         ans1=max(h(ip,n,idx+1),h(ip,n,idx+2));
//     }
//     else if(ip[idx]=='@'){
//         ans1=1+max(h(ip,n,idx+1),h(ip,n,idx+2));
//     }
    
//     return ans1;
// }

// int main(){
    
    
    
//     int t;
//     cin>>t;
    
    
    
    
//    while(t--){
//        int n;
//        cin>>n;
//        vector<char>ip(n);
//        ip[0]='.';
//        for(int i=1;i<n;i++){
//           cin>>ip[i];
//     }
    
        
//     int ans=h(ip,n,0);
//     cout<<ans<<endl;
//     }
    
    
        
       
    
//     return 0;
// }





 
 
 void h(vector<int>&ip,int m,vector<int>&ans,string s){
     int i=0;
     while(ip.size()>0){
         int prod=1;
         for(auto it:ip){
             prod*=it;
         }
         int rem=prod%m;
         ans.push_back(rem);
         
         if(s[i]=='L'){
             ip.erase(ip.begin()+0);
         }
         else if(s[i]=='R'){
             
             ip.erase(ip.begin()+ip.size()-1);
         }
         i++;
     }
     return ;
 }

// bool cmp(string &a,string &b){
//     return a.size()<b.size();
// }

static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    };


#define print cout<<"printing fixed statement"<<"\n";
int main(){

    print;
    print;
    
    
    
  
    
  
    //    int n;
    //    cin>>n;
    //    int m;
    //    cin>>m;
       
    //    vector<int>ip(n);
       
    //    for(int i=0;i<n;i++){
    //       cin>>ip[i];
    //                  }
    //    string s="";
    //    for(int i=0;i<n;i++){
    //        char ch;
    //        cin>>ch;
    //        s+=ch;
    //    }
                     
    //    vector<int>ans(n);
    //    h(ip,m,ans,s);
    //   for(auto i:ans){
    //       cout<<i<<" ";
    //   }
    //   cout<<endl;


    // int x=0;
    // int k=2;
    // cout<<(x/k)<<endl;

    // vector<string>a;
    // a.push_back("z");
    // a.push_back("md");
    // a.push_back("dz");

    // sort(a.begin(),a.end(),cmp);

    // for(auto i:a){
    //     cout<<i<<endl;
    // }
    // int res=1<<0;
    // cout<<res<<endl;



    // vector<vector<int>>num({{9,12},{1,10},{4,11},{8,12},{3,9},{6,9},{6,7}});

    // sort(num.begin(),num.end(),cmp);
    // for(auto i:num){
    //     cout<<i[0]<<","<<i[1]<<endl;
    // }








     return 0;
}