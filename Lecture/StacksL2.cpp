#include<bits/stdc++.h>
#include<limits.h>


using namespace std;


//INSERT AT BOTTOM

// void solve(stack<int>&s,int &target){
//     //base case 
//     if(s.empty()){
//         s.push(target);
//         return ;
//     }

//     int topElement=s.top();
//     s.pop();

//     //recursive call
//     solve(s,target);
//     //backtrack
//     s.push(topElement);
// }

// void insertAtBottom(stack<int>&s){
//     if(s.empty()){
//         cout<<"Stack is empty "<<endl;
//         return ;
//     }

//     int target=s.top();
//     s.pop();
//     solve(s,target);
// }




// void insertAtBottom(stack<int>&s,int target){
//     if(s.empty()){
//         s.push(target);
//         return ;
//     }

//     int topElement=s.top();
//     s.pop();

//     insertAtBottom(s,target);

//     s.push(topElement);
// }

// void reverse(stack<int>&s){
//     if(s.empty()){
//         return ;
//     }

//     int target =s.top();
//     s.pop();

//     reverse(s);

//     insertAtBottom(s,target);
// }



void insertSorted(stack<int>&s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return ;
    }

    if(s.top()>=target){
        s.push(target);
        return ;
    }

    int topElement=s.top();
    s.pop();

    //recur call
    insertSorted(s,target);

    //BT
    s.push(topElement);
}

void sortStack(stack<int>&s){
      
      if(s.empty()){
        return;
      }

      int topElement=s.top();
      s.pop();

      sortStack(s);

      insertSorted(s,topElement);


}


int main(){

      stack<int>s;

    s.push(3);
    s.push(11);
    s.push(7);
    s.push(9);
    s.push(5);

    sortStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }






    // stack<int>s;

    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    // // insertAtBottom(s);

    // reverse(s);

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }






    return 0;
}