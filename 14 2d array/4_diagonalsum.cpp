#include <iostream>
using namespace std;

void DiagonalSum(int arr[][3], int n, int m)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
}

int main()
{
    // int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);

    DiagonalSum(arr, n, m);
    return 0;
}