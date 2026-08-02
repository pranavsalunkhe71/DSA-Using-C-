#include<iostream>
using namespace std;


void diagonalsum (int arr[3][3] ,int n , int m){

    // // // int sumofdig = 0;
    // // // for (int i = 0; i < n ; i++)
    // // // {
    // // //     for (int j = 0; j < n ; j++)
    // // //     {
    // // //         if (j==i){
    // // //             sumofdig+=arr[i][j];
    // // //         }
    // // //         else if (j == n-i-1){
    // // //             sumofdig+=arr[i][j];
    // // //         }
    // // //     }
        
   
    
    // // // }
    // // // cout<<sumofdig; 


    
    /*Optimize It*/
    int digsum = 0 ;
    for (int i = 0 ; i < n ; i++){
        digsum+=arr[i][i];
        if (i != n-i-1){
            digsum+=arr[i][n-i-1];
        }
    }
    cout<<digsum;
}
int main() {
   


    // int arr[4][4] ={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };
    
    // diagonalsum(arr,4,4 );

    int arr1[3][3] ={
        {1,2,3,},
        {4,5,6,},
        {7,8,9}
    };

    diagonalsum(arr1,3,3 );

    return 0;
}