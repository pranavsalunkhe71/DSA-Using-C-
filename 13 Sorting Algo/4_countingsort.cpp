#include <iostream>
using namespace std;

void countsort(int *arr, int n) {
    int freq[10000] = {0};   // initialize with 0
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    // Find min, max and frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        minimum = min(minimum, arr[i]);
        maximum = max(maximum, arr[i]);
    }

    // Rebuild sorted array
    int j = 0;
    for (int i = minimum; i <= maximum; i++) {
        while (freq[i] > 0) {
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[7] = {1,4,1,1,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    countsort(arr, n);
    return 0;
}
