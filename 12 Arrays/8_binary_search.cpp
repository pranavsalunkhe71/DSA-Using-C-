

#include <iostream>
using namespace std;

int BinarySearch(int *arr, int n, int key)
{

    int Start = 0;
    int End = n - 1;
    while (Start <= End)
    {

        int MidValue = (Start + End) / 2;

        if (key == arr[MidValue])
        {
            cout << "The Value " << key << " Is At " << MidValue << " Location";
            return 0;
        }
        else if (key > arr[MidValue])
        {
            Start = MidValue + 1;
        }
        else
        {
            End = MidValue - 1;
        }

       
    }

    return 0;
}

int main()
{
    int arr[6] = {10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(int);
    int key = 20;

    BinarySearch(arr, n, key);
    return 0;
}