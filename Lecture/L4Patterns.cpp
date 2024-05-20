#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter rows";
//     cin>>n;

//     for(int row=0;row<n;row++){
//         int col=0;
//         for(col=0;col<row+1;col++){
//             int ans=col+1;
//             char ch=ans+'A'-1;
//             cout<<ch;
//         }
//        // col=col-1; 
//         for(int col=row;col>=1;col--){
//             int ans=col;
//             char ch=ans+'A'-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }






//FANCY PATTERN
// int main(){
//     int n;
//     cout<<"Enter rows";
//     cin>>n;
//     for(int row=0;row<n;row+=1){
//         for(int col=0;col<row+1;col++){
//             cout<<row+1;
//             if(col != row){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

//     for(int row=0;row<n;row+=1){
//         for(int col=0;col<n-row;col++){
//             cout<<n-row;
//             if(col != n-row-1){
//                 cout<<"*";
//             }
//         }

//         cout<<endl;
//     }
// }








//FLIPPED SOLID DIAMOND
// int main(){
//     int n;
//     cout<<"Enter rows ";
//     cin>>n;

//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<"*";
//         }

//         for(int col=0;col<2*row+1;col++){
//             cout<<" ";
//         }

//         for(int col=0;col<n-row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         for(int col=0;col<2*n-2*row-1;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
//     return 0;
// }






//HOLLOW DIAMOND
// int main(){
//     int n;
//     cout<<"Enter your rows ";
//     cin>>n;

//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row-1;col++){
//             cout<<" ";

//         }
//         for(int col=0;col<2*row+1;col++){
//              if(col==0){
//                  cout<<"*";
//              }
//             else if(col==2*row){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//         for(int row=0;row<n;row++){
//             for(int col=0;col<row;col++){
//                 cout<<" ";
//             }
//             for(int col=0;col<2*n-2*row-1;col++){
//                 if(col==0||col==2*n-2*row-2){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
          
            
//         }
    

//     return 0;
// }






//SOLID DIAMOND
// int main(){
//     int n;
//     cout<<"Enter rows ";
//     cin>>n;

//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row-1;col+=1){
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

    
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";

//         }
//         for(int col=0;col<n-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





//NUMERIC FULL PYRAMID

// int main(){
//     int m;
//     cout<<"Enter no of rows "<<endl;
//     cin>>m;
//     for(int  row=0;row<m;row++){
//         for(int col=0;col<m-row-1;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++){
//             cout<<row+1+col<<"";
//         }
//         for(int col=row;col>0;col--){
//             cout<<row+col;
//         }
//         cout<<endl;
//     }

//     return 0;
// }






//INVERTED FULL PYRAMID
// int main(){
//     int n;
//     cout<<"Enter your rows ";
//     cin>>n;

//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";

//         }
//         for(int col=0;col<n-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


//FULL PYRAMID
// int main(){
//     int n;
//     cout<<"Enter rows ";
//     cin>>n;

//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row-1;col+=1){
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }