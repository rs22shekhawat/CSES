#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

class Animal{
private:
int weight;    

public:


    //state or properties
    int age;
    string type;

    //behaviour or functions

//default constructor
    Animal(){
        this->age=0;
        (*this).type="";
        this->weight=0;
        cout<<"Constructor called "<<endl;
    }

//parametrised constructor
     Animal(int age){
        this->age=age;
        cout<<"parametrised Constructor called "<<endl;

     }    

//copy constructor
Animal(Animal &obj){
    this->age=obj.age;
    cout<<"i am copy constructor "<<endl;
}     

    void eat(){
      cout<<"Eating :"<<endl;
    }


    void sleep(){
      cout<<"Sleeping :"<<endl;
}

// int getWeight(){
//     return weight;
// }

// void setWeight(int weight){
//     this->weight=weight;
// }


~Animal(){
  cout<<"I am inside destructor "<<endl;
}

};

int main(){


  //  cout<<"size of empty class is "<<sizeof(Animal)<<endl;

  //object creation
//static
//Animal nikita;
// nikita.age=20;
// nikita.type="Sherni";
// cout<<"Age of Nikita is : "<<nikita.age<<endl;
// cout<<"name of nikita is : "<<nikita.type<<endl;

// nikita.setWeight(65);
// cout<<"Weight of Nikita is : "<<nikita.getWeight()<<endl;

// nikita.eat();
// nikita.sleep();



//dynamic memory

  // Animal *nikita=new Animal();
  // delete []nikita;


//   nikita->age=19;
//   nikita->type="Billi";

//alternate
//   (*nikita).age=19;
//   (*nikita).type="Billi";

//  nikita->eat(); 

//Animal a(10);
// Animal*b=new Animal(14);

//object copy
// Animal d=a;
// Animal c(a);

cout<<"a obj creation"<<endl;
Animal a;
a.age=2;


cout<<"b obj creation"<<endl;
Animal *b=new Animal();
b->age=35;
delete  b;


  return 0;
}