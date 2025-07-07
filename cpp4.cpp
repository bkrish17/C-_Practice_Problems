#include <iostream>
using namespace std;
int main()
{
    int A[]={23,53,64,73,83,65,76};
    int n=sizeof (A)/sizeof(A[0]);
    int first =A[0],second=-1;
    for(int i=1;i<n;i++)
    {
        if(A[i]>first)
        {
            second=first;
            first=A[i];
        }
        else if (A[i]<first && A[i]>second)
        {
            second=A[i];
        }
    }
    if(second==-1)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<"second largest number is"<<second<<endl;
        
    }
    return 0;
}
