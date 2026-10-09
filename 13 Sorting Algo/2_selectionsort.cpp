#include <iostream>
using namespace std;

void SelectionSort(int *arr, int n)
{
    int min_val = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i ;

        for (int j = i + 1; j < n; j++)
        {

           if(arr[j] < arr[min_idx]){
            min_idx = j;
           } 
        }

        swap(arr[i],arr[min_idx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[5] = {55, 44, 11, 22, 33};
    int n = sizeof(arr) / sizeof(int);
    SelectionSort(arr, n);
    return 0;
}