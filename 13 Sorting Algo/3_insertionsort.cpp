#include <iostream>
using namespace std;

void insertion(int *arr, int n)
{

    for (int i = 1 ; i < n; i++)
    {
        int curr = arr[i];
        int previous = i - 1;

        while( previous >= 0 && arr[previous] > curr ){
            swap(arr[previous],arr[previous+1]);
            previous--;
        }
        

        }


        for(int i = 0 ; i < n ; i++){
            cout<<arr[i]<<",";
        }
    }
    

int main()
{
    int arr[] = {3, 2, 1, 22, 443, 53, 64, 64};
    int n = sizeof(arr) / sizeof(int);

    insertion(arr, n);
    return 0;
}