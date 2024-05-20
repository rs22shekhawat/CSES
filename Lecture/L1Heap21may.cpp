#include<bits/stdc++.h>
using namespace std;


class heap{
    public:
    int a[101];
    int size;

    heap(){
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        a[index]=val;

        while(index>1){
            int parentIndex=index/2;

            if(a[index]>a[parentIndex]){
                swap(a[index],a[parentIndex]);
                index=parentIndex;
            }
            else{
                break;
            }

        }
    }


    int deleted(){

        int ans=1;
        a[1]=a[size];
        size--;

        int index=1;
        while(index<size){
            int left=2*index;
            int right=2*index+1;

            int largest=index;

            if(left<size && a[index]<a[left]){
                largest=left;
            }
            if(right<size && a[index]<a[right]){
                largest=right;
            }

            if(largest==index){
                break ;
            }
            else{
                swap(a[index],a[largest]);
                index=largest;
            }
        }
        return ans;
    }
};

int main(){

    heap h;
    h.insert(100);
    h.insert(70);
    h.insert(80);
    h.insert(40);
    h.insert(50);
    h.insert(110);
    h.size=6;

    cout<<"printing the heap "<<endl;

    for(int i=1;i<=h.size;i++){
        cout<<h.a[i]<<" ";
    }


    




    return 0;
}