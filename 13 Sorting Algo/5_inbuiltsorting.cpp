#include<iostream>
#include <algorithm>
using namespace std;



int main() {
    int arr[8] = {34,22,4,65,333,23,2,87};
    int n = sizeof(arr) / sizeof(int);

    sort(arr,arr+n);

    
    // sort(arr,arr+8,greater<int>());   /* for descending order */


     for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0; 
}