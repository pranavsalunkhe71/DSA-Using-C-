#include<cmath>
#include<iostream>
using namespace std;

void maxsubarray(int *arr , int n ){

    int maxsubarray = INT_MIN;

    for(int start = 0 ; start < n ; start++){

        int currentsum = 0;

        for(int end = start ; end < n ; end++){

             currentsum += arr[end];

            maxsubarray = max(currentsum ,maxsubarray);

        }


    }
    cout<<maxsubarray;
}

    
int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxsubarray(arr,n);
    
    return 0;
}