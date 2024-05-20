#include<bits/stdc++.h>

using namespace std;



// int printCounting(int n){

//     if(n==0)
//        return 0;
     
//     printCounting(n-1);
//     cout<<n<<endl;
//     //printCounting(n-1);
// }




int fib(int n){
    if(n==2){
        return 1;
    }
    if(n==1){
        return 0;
    }

    int ans =fib(n-1)+fib(n-2);

    return ans;
}

int main(){

    int n;
    cout<<"Enter your no"<<endl;
    cin>>n;
    int ans=fib(n);

    cout<<n<<"th term is "<<ans;










    // int n;
    // cout<<"Enter a no "<<endl;
    // cin>>n;

    // printCounting(n);

    return 0;
    
}