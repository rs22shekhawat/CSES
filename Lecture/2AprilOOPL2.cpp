#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

// class Animal{
//     protected:
//       int  age;
//       int weight;

//     void eat(){
//         cout<<"Eating"<<endl;
//     }  

// };

// class Dog:public Animal{
//     public:
//     void print(){
//         cout<<this-age;
//     }
    

// };




//Single level inheritance

// class Car{
//     public:
//      string name;
//      int age;
//      int weight;

//      void SpeedingUp(){
//         cout<<"Speeding Up"<<endl;
//      }

//      void breakMaro(){
//         cout<<"Break Mardi"<<endl;
//      }
     
// };

// class Scorpio:public Car{

// };




//Multi-level inheritance

// class Fruit{
//     public:
//     string name;
// };

// class Mango:public Fruit{
//     public:
//     int weight;
// };

// class Alphanso :public Mango{
//     public:
//     int sugarLevel;

// };




//Multiple Inheritance

// class A{
//     public:
//     int physics;
// };

// class B{
//     public:
//     int chemistry;
// };

// class C:public A,public B{
//     public:
//     int maths;
// };


//AMBIGOUS CASE ME(In Multiple Inheritance)

// class A{
//     public:
//     int chemistry;

//     A(){
//         chemistry=101;
//     }
// };

// class B{
//     public:
//     int chemistry;

//     B(){
//         chemistry=410;
//     }
// };

// class C:public A,public B{
//     public:
//     int maths;
// };




//Heirarihical Inheritance

// class Car{
//     public:
//      string name;
//      int age;
//      int weight;

//      void SpeedingUp(){
//         cout<<"Speeding Up"<<endl;
//      }

//      void breakMaro(){
//         cout<<"Break Mardi"<<endl;
//      }
     
// };

// class Scorpio:public Car{

// };

// class Fortuner:public Car{

// };


//FUNCTION OVERLOADING

// class Maths{
//     public:

//     int sum(int a ,int b){
//         return a+b;
//     }

//     int sum(int a,int b,int c){
//         return a+b+c;
//     }

//     int sum(int a,float b){
//         return a+b+100;
//     }
// };



//OPERATOR OVERLOADING
class Param{
    public:
    int val;

    void operator+ (Param &obj2){
        int value1=this->val;
        int value2=obj2.val;
        cout<<value2-value1<<endl;

    }

};


int main(){

//OPERATOR OVERLOADING
    Param obj1,obj2;
    obj1.val=7;
    obj2.val=2;
    obj1+obj2;



//FUNCTION OVERLOADING

//   Maths m;
//   cout<<m.sum(3,4.3f);




//Heirarihical Inheritance
    // Scorpio s;
    // s.SpeedingUp();



//Multiple Inheritance
    // C obj;
    // cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;


//AMBIGOUS CASE ME(In Multiple Inheritance)
    // C obj;
    // cout<<obj.B::chemistry<<" "<<obj.maths<<endl;




//Multi-level inheritance
    // Alphanso a;
    // cout<<a.name <<" "<<a.weight<<" "<<a.sugarLevel<<endl;



//Single level inheritance
    // Scorpio s;
    // s.SpeedingUp();




    // Dog d1;
    // d1.print();



   return 0;
}