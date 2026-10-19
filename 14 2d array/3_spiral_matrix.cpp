#include <iostream>
using namespace std;

void SpiralMatrix(int arr[4][4] , int n , int m ){

    for(int i = 0 ; i < n ; i++){
        
    }

}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][1]);
    SpiralMatrix(arr,n,m);
    return 0;
}