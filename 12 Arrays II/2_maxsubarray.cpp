#include <iostream>
using namespace std;

void SubArray(int *arr, int n)
{
    int maxsum = INT_MIN;

    for (int start = 0; start < n; start++)
    {

        for (int end = start; end < n; end++)
        {

            int currentsum = 0;
            for (int i = start; i <= end; i++)
            {

                currentsum += arr[i];

                if (currentsum > maxsum)
                {
                    maxsum = currentsum;
                    currentsum = 0;
                }
            }

            // cout << currentsum << ",";
        }

        // cout << endl;
    }

    cout << "Max Sum OF SubArray is : " << maxsum;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};

    int n = sizeof(arr) / sizeof(int);
    SubArray(arr, n);

    return 0;
}