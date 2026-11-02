/* #include <iostream>
using namespace std;

void SearchInSortedArray(int arr[4][4], int n, int m, int key)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (key == arr[i][j])
            {
                cout << "[" << i << "]" << "[" << j << "]";
                break;
            }
        }
    }
}

int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);
    int key = 37;
    SearchInSortedArray(arr, n, m, key);
    return 0;
} */

#include <iostream>
using namespace std;

void SearchInSortedArray(int arr[4][4], int n, int m, int key)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (key == arr[i][j])
            {
                cout << "[" << i << "]" << "[" << j << "]";
                break;
            }
        }
    }
}

int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};

    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);
    int key = 37;
    int BL = [m-1][0];
    int TR = [0][n-1];
    SearchInSortedArray(arr, n, m, key);

    return 0;
}