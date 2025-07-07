#include <iostream>
using namespace std;
int main()
{
    int A[7]={4,8,6,9,5,2,7};
    int i,n=7,max;
    max=A[0];
    for (i=1;i<7;i++)
    {
        if (A[i]>max)
        {
            max =A[i];
        }
    }
    cout<<" maximum no. is "<<max;
    return 0;
    
}
