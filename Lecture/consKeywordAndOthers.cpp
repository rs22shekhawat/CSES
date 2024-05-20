#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

// class abc{
//     public:
//     int x,y;

//     void print(){
//         cout<<x<<" "<<y<<endl;
//     }

// };




// class abc{
//     public:
//     static int x,y;

//     void print(){
//         cout<<x<<" "<<y<<endl;
//     }

// };

// int abc::x;
// int abc::y;



class abc{
    public:
    int x,y;

    abc():x(0),y(0){}

    static void print(){
        //no this pointer available
        cout<<"I am in static function "<<endl;
    }

};

int main(){

    abc obj1;
    abc::print();
    abc obj2;
    abc::print();
    abc::print();




//    abc obj1={1,3};
//    abc obj2={2,4};

//    obj1.print();
//    obj2.print();

    //  abc obj1;
    //  obj1.x=2;
    //  obj1.y=3;
    //  obj1.print();
    //  abc obj2;
    //  obj2.x=10;
    //  obj2.y=20;
    //  obj1.print();
    //  obj2.print();







    return 0;
}