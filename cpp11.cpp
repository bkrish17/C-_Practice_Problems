#include <iostream>
using namespace std;
int maxim(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else return c;
}
int main()
{
    int x=10,y=75,z=7,r;
    r=maxim(x,y,z);
    cout<<r<<endl;
    return 0;
}
