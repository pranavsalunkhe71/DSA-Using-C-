// #include<iostream>
// using namespace std;


// void print(int *arr , int n ){
//     for(int i = 0 ; i < n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void bubble(int *arr , int n ){
// for (int i = 0 ; i < n-1 ; i++){
//     int temp = arr[i];
//     for (int j = 0 ; j < n-i-1 ; j++){
//     if (arr[j] > arr[j+1]){
//         swap(arr[j] , arr[j+1]);

//     }
// }


// }
// print(arr,n);

// }


// int main() {

//     /*Solve This Using Bubble Sort*/
//     int arr[10] = {3,6,2,1,8,7,4,5,3,1};
//     int n = sizeof(arr) / sizeof(int);
//     bubble(arr,n);
     
//     return 0;
// } 
#include<iostream>
using namespace std;


void print(int *arr , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

void bubble(int *arr , int n ){
    for (int i = 0 ; i < n - 1; i++ ){
        int current = arr[i];
        for ( int j = 0 ; j < n - i - 1 ; j++){ 
            if (arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }

    }
print(arr,n);
}


int main() {

    /*Solve This Using Bubble Sort*/
    int arr[10] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);
    bubble(arr,n);
     
    return 0;
} 