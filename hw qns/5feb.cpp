#include<iostream>
#include<bits/stdc++.h>

using namespace std;




//REVERSE INTEGER

int reverse(int x) {
        int ans=0, rem=0;
        bool isNegative=false;
        
        if(x<=INT_MIN){
            return 0;
        }
        
        if(x<0){
            isNegative=true;
            x=-x;
        }
        
        while(x>0){
            if(ans>INT_MAX/10){
                return 0;
                            }
            int digit=x%10;
           ans=ans*10+digit;
            x=x/10;
                    }
        return isNegative?-ans:ans;
            }



//PRIME NO FROM 1 TO N

// bool CheckPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }



// double celciusToFahrenheit(double &c){
//     double ans;
//     ans=((c*9/5)+32);

//     return ans;
// }







int main(){


//PRIME NO FROM 1 TO N
    // int n;
    // cin>>n;

    // for(int i=2;i<=n;i++){
    //     bool isiPrime=CheckPrime(i);
    //     if(isiPrime){
    //         cout<<i<<" ";
    //     }

    // }


// REVERSE INTEGER

    int x=-1243;
    int final= reverse(x);
    cout<<final;








    // double c;
    // cout<<"Enter value of degree Celcius: "<<endl;
    // cin>>c;

    // double ans1=celciusToFahrenheit(c);

    // cout<<"Converted value is : "<<ans1<<endl;




    // int n;

    // cout<<"Enter a number :"<<endl;
    // cin>>n;
    // int final=reverse(n);

    // while(final != 0){
    //     int digit=final%10;
    //     cout<<digit<<" ";
    //     final/=10;
    // }


    // int n;
    // cout<<"Enter a binary number "<<endl;
    // cin>>n;

    // int ans=0;
    // int c=0;

    // while(n>0){

    //     ans=ans+(n%10)*(1<<c++);
    //     n/=10;
    // }
    // cout<<"Decimal is : "<<ans<<endl;


//DECIMAL TO BINARY
    int n;
    cout<<"Enter a Decimal number "<<endl;
    cin>>n;

    int ans=0;
    stack<int>s;
    

    while(n>0){
        ans=n&1;
        n=n>>1;
        s.push(ans);
        
            }

      while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }        

            


    return 0;
}