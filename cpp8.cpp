#include <iostream>
using namespace std;
int main()
{
    int A[]={1,2,3};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"all possible subarrays are ";
    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            cout<<"[";
            for(int k=start;k<=end;k++)
            {
                cout<<A[k]<<" ";
            }
            cout<<"]"<<endl;
        }
    }
    return 0;
}
