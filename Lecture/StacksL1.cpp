#include<bits/stdc++.h>
#include<limits.h>


using namespace std;

class Stack{
    public:
      
      int size;
      int top;
      int* arr;

      Stack(int size) {
        arr=new int(size);
         top=-1;
        this->size=size;
      }

    //functions

    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack Overflow "<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow, can't delete element ";
        }
        else{
            top--;
        }
    }

    int getTop(){
        if(top==-1){
            cout<<"There is no element "<<endl;
        }
        else{
            return arr[top]; 
        }
    }

    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else {
            return false;
        }
    }

};





// void printMiddle(stack<int>&s,int &totalSize){

//     //base case
//     if(s.size()==totalSize/2+1){
//         cout<<"Middle element is: "<<s.top()<<endl;
//         return;
//     }


//      int temp=s.top();
//      s.pop();

//     //recursive call
//     printMiddle(s,totalSize);

//     //backtrack
//     s.push(temp);


// }


int main(){

    // stack<int>s;

    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.push(60);
    // s.push(70);


    // int totalSize=s.size(); 
    // printMiddle(s,totalSize);










    //  string str="Singh";
    //  stack<char>s;

    //  for(int i=0;i<str.length();i++){
    //     s.push(str[i]);

    //  }

    //  while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    //  }






      
    //   Stack s(10);
    //   s.push(10);
    //   s.push(20);
    //   s.push(30);
    //   s.push(40);

    //   while(!s.isEmpty()){
    //     cout<<s.getTop()<<" ";
    //     s.pop();
    //   }

    //   cout<<"size of stack "<<s.getSize()<<endl;





    // stack<int>st;

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // //To Remove
    // st.pop();

    // //Top element
    // cout<<"Top element is "<<st.top()<<endl;

    // //To find size
    // cout<<"Size of stack is: "<<st.size()<<endl;

    // //To check empty or not
    // if(st.empty())
    //    cout<<"stack is empty "<<endl; 
    // else 
    //    cout<<"stack is not empty "<<endl;

    // //Printing
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }      
    



    return 0;
}