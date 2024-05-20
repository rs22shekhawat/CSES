#include<iostream>
#include<string.h>
#include<string>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;


// void util(int* p){
//     //p=p+1;
//     *p=*p+1;
// }



// void solve(int** ptr){
//     **ptr=**ptr+1;

   // *ptr=*ptr+1;

   // ptr=ptr+1;
//}


// int solve(int &value){
//     value++;
    
// }

// int * solve(){
//     int a=25;
//     int *ans=&a;
//     cout<<ans<<endl;
//     cout<<&a<<endl; 
//     return ans;
// }

int main(){


    int arr[]={4,5,6,7};
    int *p=(arr+1);
    cout<<*arr +9;


    // cout<<solve();



    // int a=5;
    // int &b=a;

    // solve(a); 
    // cout<<a;



    // int a=5;
    // int &b=a;

    // cout<<a<<endl;
    // cout<<b<<endl;

    // a++;
    // cout<<a<<endl;
    // cout<<b<<endl;

    // b++;
    // cout<<a<<endl;
    // cout<<b<<endl;






    // int x=12;
    // int *p=&x;
    // int  **q=&p;

    // solve(q);
    
    // cout<<x<<endl;





    // int a=5;
    // int* p=&a;

    // cout<<"Before "<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // util(p);

    // cout<<"After "<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;






    // int a=5;
    // int* p=&a;
    //    int** q=&p;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;









    return 0;
}