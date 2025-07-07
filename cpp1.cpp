#include <iostream>
using namespace std;
int main()
{
    int A[]={10,20,30,40,50};
    
    int size = sizeof(A)/sizeof (A[0]);
    
    for(int i=0;i<size;i=i+2)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
