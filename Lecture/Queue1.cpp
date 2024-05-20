#include<bits/stdc++.h>

using namespace std;

// class Queue{

//     public:
//     int *arr;
//     int size;
//     int front=0;
//     int rear=0;

//     Queue(int size){
//         this->size=size;
//         arr=new int(size);
//     }

//     void push(int data){
//         if(rear==size){
//             cout<<"Q  is full "<<endl;
//         }
//         else{
//             arr[rear]=data;
//             rear++;
//         }
//     }

//     void pop(){
//         if(front==rear){
//             cout<<"Q is empty "<<endl;
//         }
//         else{
//             arr[front]=-1;
//             front++;
//             if(front==rear){
//                 front=0;
//                 rear=0;
//             }
//         }
//     }

//     int getFront(){
//         if(front==rear){
//             cout<<"Q is empty."<<endl;
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }

//     bool isEmpty(){
//         if(front==rear){
//             return true;

//         }
//         else{
//             return false;
//         }
//     }

//     int getSize(){
//         return rear-front;
//     }
// };




// class Queue{

//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size){
//         this->size=size;
//         arr=new int(size);
//         front=-1;
//         rear=-1;
//     }

//     void push(int data){
//         //if full
//         //single element
//         //circular nature
//         //normal flow

//         //H/W:-
//         //one more is to be written in Q is full 

//         if(front==0 && rear==size-1){
//             cout<<"Q is full,cannot insert"<<endl;
//         }
//         else if(front==-1){
//             front=0;
//             rear=0;
//             arr[rear]=data;
//         }
//         else if(rear ==size-1 && front!=0){
//             rear=0;
//             arr[rear]=data;
//         }
//         else {
//             rear++;
//             arr[rear]=data;
//                     }
//     }

//     void pop(){
//         //empty hai
//         //one element
//         //circular
//         //normal

//         if(front==-1){
//             cout<<"Already empty "<<endl;
//         }
//         else if(front==rear){
//             arr[rear]=-1;
//             rear=-1;
//             front=-1;
//         }
//         else if(front==size-1 ){
//             front=0;
//         }
//         else{
//             front++;
//         }
//     }




// };







int main(){


    // deque<int>d={3,5,6,7};
    // d.push_back(19);
    // d.push_front(10);

    // // d.clear();
    // // cout<<d.back()<<endl;
    // // d.at(3)=11;
    // d.assign(8,5);

    // while(!d.empty()){
    //     cout<<d.front()<<" ";
    //     d.pop_front();
    // }












    //   Queue  q(10);
    //   q.push(2);
    //   q.push(3);
    //   q.push(4);
    //   q.push(5);

    //   cout<<"size of queue is "<<q.getSize()<<endl;
    //   q.pop();
    //   cout<<"size of queue now is "<<q.getSize()<<endl;

    //   cout<<"front is "<<q.getFront()<<endl;

    //   if(q.isEmpty()){
    //     cout<<"empty"<<endl;
    //   }
    //   else {
    //     cout<<"not empty"<<endl;
    //   }
        





    // queue<int>q;
    // q.push(5);
    // q.push(6);
    // q.push(7);
    // q.push(8);

    // cout<<"size of queue is "<<q.size()<<endl;

    // q.pop();
    // cout<<"size of queue is "<<q.size()<<endl;

    // cout<<"front element is "<<q.front()<<endl;
    // cout<<"rear element is "<<q.back()<<endl;

    // if(q.empty()){
    //     cout<<"empty "<<endl;
    // }
    // else 
    //    cout<<"not empty "<<endl;







       return 0;
}