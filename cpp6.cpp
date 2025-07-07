#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 2, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    bool isSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            isSorted = false;
            break;
        }
    }
    if (isSorted)
    {
        cout << "The array is sorted in ascending order" << endl;
    } else
    {
        cout << "The array is NOT sorted in ascending order" << endl;
    }
    return 0;
}
