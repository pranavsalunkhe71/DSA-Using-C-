#include<iostream>
using namespace std;

void print(int *arr , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

void insertion(int *arr , int n){

   for (int i = 1 ; i < n ; i++){
        int current = arr[i];
        for (int prev = i - 1 ; prev >= 0 ;prev--){
            while(current < arr[prev] && arr[prev] >= 0){
            swap(arr[prev] , arr[prev+1]);
            prev--;
            }

            arr[prev+1]= current; 
        }
   }

print(arr,n);

}

int main() {
    /*Solve This Using Insertion Sort*/
    int arr[10] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);
    insertion(arr,n);
    return 0;
}