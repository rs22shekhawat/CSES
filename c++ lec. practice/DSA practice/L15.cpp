#include <iostream>

using namespace std;

void changes(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int a=5,b=10;
    changes(a,b);

    cout<<a<<endl<<b<<endl;
                                      

    return 0;



}

