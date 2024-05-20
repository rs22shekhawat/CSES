#include<iostream>

using namespace std;

int main(){
    int *p= new int[20];
    cout<<sizeof(p)<<endl;
                         
    delete []p;                     
    int *p=new int[40];
    cout<<sizeof(p);

    return 0;

}