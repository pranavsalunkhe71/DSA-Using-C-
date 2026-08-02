#include<iostream>
#include <algorithm>
using namespace std;


void print(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[8] = {34,22,4,65,333,23,2,87};
    sort(arr,arr+8);
    // sort(arr,arr+8,greater<int>());   /* for descending order */
    print(arr,8);
    return 0; 
}