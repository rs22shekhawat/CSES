#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

#define PI 3.14159465

float circleArea(float r){
    return PI*r*r;
}


// class abc{
//     int x;
//     int *y;
//     int z;
//     public:
    
//     abc(){
//         x=0;
//         y=new int(0);
//     }

    // abc(int _x,int _y,int _z=0){
    //     x=_x;
    //     y=new int(_y);
    //     z=_z;
    // }

//initialisation list
    // abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){}


    // int getX() const{
       
    //     return x;
    // }

    // void setX(int _val){
    //     x=_val;
    // }

    //  int getY() const{
    //     return *y;
    // }

//     void setY(int _val){
//         *y=_val;
//     }


// };

// void printABC(const abc &a){
//     cout<<a.getX()<<" "<<a.getY()<<endl;
// }

int main(){
    cout<<circleArea(43.3);






    // abc a(1,2);
    // printABC(a);


    // abc a;
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;


    // const int x=5;
    // cout<<x<<endl;


//const with pointer
    // const int *a=new int(2);
    //alternate
    // int const*a=new int (2);
    // *a=5; //can't change data
    // cout<<*a<<endl;
    // delete a;

    // int b=4;
    // a=&b;
    // cout<<*a<<endl;

    // int b=10;
    // a=&b;    //(can re assign pointer)
    // cout<<*a<<endl;


    // int *const a=new int(2);
    // cout<<*a<<endl;
    // *a=40;    //chal jayega 
    // cout<<*a<<endl;

    // int b=50;
    // a=&b;     //nahi chalega
    // cout<<*a<<endl;



//(const data,const pointer)
    //  const int *const a=new int(2);
    //  cout<<*a<<endl;
    //  *a=5;      (nahi chlega) 
    //  int b=4;
    // a=&b;    (nahi chlega) 






//MACROS
    











    return 0;
}