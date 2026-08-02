/* subarrays is a contiguous part of an array */

#include<iostream>
using namespace std;

int subarray(int *arr ,int n){

    for (int start = 0 ; start <n ; start++){
    
        for (int end = start ; end <n ; end++){
            // // cout<<"("<<start<<","<<end<<")";

            for (int start = start ; start<=end ; start++){
                cout<<arr[start];

            }
            cout<<",";
        }
    
        cout<<endl;
    }
}


int main() {
    
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    subarray(arr,n);
    return 0;
}
