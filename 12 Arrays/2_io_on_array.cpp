#include<iostream>
using namespace std;

int main() {
    int arr[5] = {70,30,99,40,30};  
    int n = sizeof(arr) / sizeof(int);

    for(int idx = 0 ; idx < n ;idx++){
        
        cout<<arr[idx]<<",";


    }


    return 0;
}