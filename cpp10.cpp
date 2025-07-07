#include <iostream>
using namespace std;
int main() {
    int A[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(A) / sizeof(A[0]);
    int j = 0;  
    
    for (int i = 0; i < n; i++)
    {
        if (A[i] != 0)
        {
            A[j] = A[i];
            j++;
        }
    }
    
    while (j < n)
    {
       A[j] = 0;
        j++;
    }
    
    cout << "Array after moving all zeros to the end\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
