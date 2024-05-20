#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter no of rows"<<endl;
    cin>>n;


//NUMERIC HOLLOW HALF INVERTED PYRAMID

for(int row=0;row<n;row++){
    for(int col=row+1;col<=n;col++){
        if(row==0 || row==n-1){
            cout<<col<<" ";
        }
        else if(col==row+1 || col==n){
            cout<<col<<" ";
        }
        else{
            cout<<"  ";
        }
        
    }
    cout<<endl;
}




//NUMERIC PALINDROME EQUILATERAL PYRAMID

// for(int row=0;row<n;row++){
//     int x=row;
//     for(int col=0;col<n-row-1;col++){
//         cout<<" ";
//     }
//     for(int col=0;col<row+1;col++){
//         cout<<col+1;
//     }
//     for(int col=0;col<row;col++){
//         cout<<x--;
//     }
//     cout<<endl;

// }




//FANCY PATTERN #2
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<"*";
    //     }
    //     for(int col=0;col<2*row+1;col++){
    //         if(col%2==0){
    //             cout<<row+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }




//FANCY PATTERN #3
    // for(int row=0;row<n;row++){
    //     int x=row-1;
    //     for(int col=0;col<2*row+1;col++){
            
    //         if(col==0 || col==2*row){
    //             cout<<"*";
    //         }
    //         else if(col<=(2*row+1)/2){
    //             cout<<col;
    //         }
    //         else {
    //             cout<<x--;
    //         }
    //     }
    //     cout<<endl;
    // }




//FLOYD TRIANGLE
    // int x=1;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<x++<<" ";
    //     }
    //     cout<<endl;
    // }





//BUTTER FLY PATTERN
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     for(int col=0;col<2*n-2*row-2;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     for(int col=0;col<2*row;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    return 0;
}