#include<bits/stdc++.h>

using namespace std;

// void  reverseQueue(queue<int>&q){
//     stack<int>s;

//     while(!q.empty()){
//         int element=q.front();
//         q.pop();

//         s.push(element);
//     }

//     while(!s.empty()){
//         int element=s.top();
//         s.pop();

//         q.push(element);
//     }
// }



// void reverseQueueRecursion(queue<int>&q){
//     if(q.empty()){
//         return ;
//     }

//     int temp=q.front();
//     q.pop();

//     reverseQueueRecursion(q);

//     q.push(temp);
// }



// void reverseK(queue<int>&q,int &k){
//     int n=q.size();
//     stack<int>s;
//     int count=0;

//     if(k<=0 || k>n){
//         return ;
//     }

//     while(!q.empty()){
//         int temp=q.front();
//         q.pop();
//         s.push(temp);
//         count++;

//         if(count ==k){
//             break;
//         }
//     }

//     while(!s.empty()){
//         int temp=s.top();
//         s.pop();
//         q.push(temp);
//     }

//     count=0; 
//     while(!q.empty() ){
//         int temp=q.front();
//         q.pop();
//         q.push(temp);

//         count++;
//         if(count==n-k){
//             return ;
//         }
        
//     }
// }



// void interLeave(queue<int>&q){
//     int n=q.size();
//     int k=n/2;
//     queue<int>q2;
//     int count=0;

//     if(q.empty()){
//         return ;
//     }

//     while(!q.empty()){
//         int element=q.front();
//         q.pop();
//         q2.push(element);
//         count++;

//         if(count==k){
//             break;
//         }
//     }

//     while(!q.empty() && !q2.empty()){
//         int first=q2.front();
//         q2.pop();
//         q.push(first);

//         int second=q.front();
//         q.pop();
//         q.push(second);
//     }

//     if(n&1){
//         int element=q.front();
//         q.pop();
//         q.push(element);
//     }
// } 



void solve(int arr[],int k,int size){
    deque<int>q;
    int n=size;

    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push_back(i);
        }
    }

    for(int i=k;i<n;i++){

        if(q.empty()){
            cout<<" 0 "<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }

        while((!q.empty()) && (i-q.front()>=k)){
            q.pop_front();
        }

        if(arr[i]<0){
            q.push_back(i);
        }
    }

    if(q.empty()){
        cout<<" 0 "<<" ";
    }
    else{
        cout<<arr[q.front()];
    }

}




int main(){

    // int arr[]={12,-1,-7,8,-15,30,16,28};

    int arr[]={-12,-1,4,3,-2,9,8};
    

    int k=3;
    int size=7;

    solve(arr,k,size);










    // queue<int>q;

    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // q.push(6);
    // q.push(7);
    // q.push(8);
    // q.push(9); 


    // interLeave(q); 


    
    // q.push(3);
    // q.push(6);
    // q.push(9);
    // q.push(2);
    // q.push(8);

    // reverseQueue(q);

    // reverseQueueRecursion(q);
    // cout<<"Printing Queue using Recursion "<<endl;

    // int k=3;
    // reverseK(q,k);


    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    // cout<<endl;

    



    return 0;
}