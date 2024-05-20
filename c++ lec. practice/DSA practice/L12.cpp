#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main()
{

     struct Rectangle *p;
     p=new Rectangle;//DYNAMIC ALLOCATION

    p->length=8;
    cout<<p->length;

    return 0;
}