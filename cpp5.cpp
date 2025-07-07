#include <iostream>
using namespace std;
int main()
{
    int A[]={16,17,4,3,5,2};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"leaders in the array are ";
    
    int max_from_right=A[n-1];
    cout<<max_from_right<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]>=max_from_right)
        {
            max_from_right=A[i];
            cout<<max_from_right<<" ";
        }
    }
    cout<<endl;
    return 0;
}
