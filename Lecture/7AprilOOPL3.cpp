#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

// class Animal{
//     public:

//   virtual  void speak(){
//         cout<<"Speaking"<<endl;
//     }

//     Animal(){
//         cout<<"I am inside animal constructor"<<endl;
//     }

// };

// class Dog:public Animal{
//     public:

//     void speak(){
//         cout<<"Barking "<<endl;
//     }

//     Dog(){
//         cout<<"I am inside dog constructor"<<endl;
//     }
// };

int main(){

    int row=5;
    int col=3;
    int** arr= new int* [5];
    
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //PRINTING
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //De-Allocate
    for(int i=0;i<row;i++){
        delete[]arr[i];
    }

    delete[]arr;



    // Dog d;
    // d.speak();

    // Animal* a= new Animal();
    // a->speak();

    //  Dog* a= new Dog();
    // a->speak();


//UPCASTING
    // Animal* a= new Dog();
    // a->speak();

    // Animal* a= new Dog();     NOW IT WILL PRINT BARKING AFTER MAKING PARENT FUNCTION VIRTUAL 
    //  a->speak();

    // Dog* a= (Dog*)new Animal();
    // a->speak();



 // Animal* a=new Animal();
    // Animal* a=new Dog();

//    Dog * a=new Dog();
//    Dog a;

 //    Dog * a=(Dog*) new Animal();









    return 0;
}