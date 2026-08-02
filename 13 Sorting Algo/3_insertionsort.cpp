#include<iostream>
using namespace std;

void insertion(int *arr, int n) {

    for(int i = 1; i < n; i++) {
        int current = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > current) {
            arr[prev + 1] = arr[prev];   
            prev--;
        }

        arr[prev + 1] = current;         
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {3, 2, 1,22,443,53,64,64};
    int n = sizeof(arr) / sizeof(int);

    insertion(arr, n);
    return 0;
}
