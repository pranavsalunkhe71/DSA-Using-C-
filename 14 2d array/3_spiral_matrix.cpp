#include<iostream>
using namespace std;

void spriralmatrx(int arr[4][4] , int n , int m){

    /*Top , Right , Bottom , Left*/
    int sr = 0; 
    int sc = 0;
    int er = n-1;
    int ec = m-1;

    while (sc<=ec && sr<=er) 
    /*<= because we want to print the last element too and in odd number of 
    rows/columns the last element is not printed if we use < */
    {
      
    
    /* Top */
    for (int i = sr ; i <= ec ; i++){
        cout<<arr[sr][i]<<",";
    }
    /* Right */
    for (int i = sr+1 ; i <= er ; i++){
        cout<<arr[i][ec]<<",";
    }


/* This Below Bottom And Left if statement is corner case which is used to 
avoid printing the same element twice */

    /*Bottom*/
    for (int i = ec-1 ; i >= sc ; i--){
        if(sc==ec){  
            break;
        }
        cout<<arr[er][i]<<",";
    }
    /* Left */
    for (int i = er-1 ; i >= sr+1 ; i--){
        if (sr==er)
        {
            break;
        }
        
        cout<<arr[i][sc]<<",";
    }
    
    sr++; /*Top*/
    ec--; /*Right*/
    er--; /*Bottom*/
    sc++; /*Left*/
    }}

int main() {
   


    int arr2[3][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n = 3; 
    int m = 4;
    spriralmatrx(arr2,n,m );

    return 0;
}