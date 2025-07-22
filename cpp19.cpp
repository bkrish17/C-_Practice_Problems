#include <iostream>
using namespace std ;
int pow(int m,int n)
{
    int result=1;
    for(int i=0;i<n;i++)
    {
        result*=m;
    }
    return result ;
}
int main()
{
    int result=pow(2,5);
    cout<<result<<endl;
    return 0;
}
