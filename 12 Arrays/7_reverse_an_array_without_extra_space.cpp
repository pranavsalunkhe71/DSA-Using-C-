
#include<iostream>

using namespace std;

void ReverseArray(int *arr , int n ){

    int start =  0;
    int end =  n-1 ;
    while(start < end){

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        

        start++;
        end--;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    


}

int main() {
    int arr[5] = {5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);

    ReverseArray(arr,n);
    return 0;
}












