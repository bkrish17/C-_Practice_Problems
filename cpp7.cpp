#include <iostream>
using namespace std;
int main()
{
    int A[]={1,1,2,2,3,4,4,5};
    int n=sizeof(A)/sizeof(A[0]);
    if(n==0 || n==1)
    {
        cout<<"length of distinct sorted part "<<n<<endl;
        return 0;
    }
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]!=A[i+1])
        {
            A[j]=A[i];
            j++;
        }
    }
    A[j]=A[n-1];
    j++;
    cout<<"distinct sorted elemunts ";
    for(int i=0;i<j;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n length of distinct sorted part "<<j<<endl;
    return 0;
}
