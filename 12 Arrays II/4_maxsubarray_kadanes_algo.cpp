
#include <iostream>
using namespace std;

void maxsubarray(int arr[6], int n)
{
    int maxsum = INT_MIN;
    int currentsum = 0 ;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maxsum = max(maxsum,currentsum);
        if (currentsum < 0){
            currentsum =  0;
        }

    }
    cout<<"The Max Sub Is :"<<maxsum;
    }

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxsubarray(arr, n);
    return 0;
}
