#include<iostream>
using namespace std;

void print(int *arr , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

void selection(int *arr , int n){

    for (int i = 0 ; i < n-1 ; i++){
        int minindex = i ;
        for (int j = i ; j < n ; j++){
                if (arr[j] < arr[minindex])
                minindex = j;
        }
       swap(arr[minindex],arr[i]);

    }

print(arr,n);

}

int main() {
    /*Solve This Using Selection Sort*/
    int arr[10] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);
    selection(arr,n);
    return 0;
}