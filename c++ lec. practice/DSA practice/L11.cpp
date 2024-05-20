#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main()
{

     struct Rectangle r={10,5};
     struct Rectangle *p=&r;
    //(*p).length=6;  OR
    p->length=6;
    cout<<r.length;

    return 0;
}