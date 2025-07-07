#include <iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4,5};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"original array ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
    cout<<"reversed array ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
