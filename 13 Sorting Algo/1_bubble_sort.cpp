#include <iostream>
using namespace std;

void BubbleSort(int *arr, int n)
{

    int arr2[5];
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            arr2[j] = min(arr[j], arr[j + 1]);
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    BubbleSort(arr, n);
    return 0;
}