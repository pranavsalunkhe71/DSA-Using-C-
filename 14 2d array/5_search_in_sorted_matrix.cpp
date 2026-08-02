/*----Brute Force------*/

/*
#include<iostream>
using namespace std;

void bruteforce(int arr [3][3] , int n , int key){

    for (int i = 0 ; i  < n ; i++ ){
        for (int j = 0 ; j < 3 ;j++){
            if (key == arr[i][j]){
                cout<<i<<","<<j;
                break;
            }

        }
    }


}

int main() {
    int arr[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int key = 1;
    bruteforce(arr , 3 , key );
    return 0;
}
*/

/*----Binary Search------*/

/*
#include<iostream>
using namespace std;

void bruteforce(int arr [3][3] , int n , int m , int key){

    int start = 0 ;
    int end = (n * m )- 1 ;
    int i ;
     while (start<=end){
        int mid = start + (end-start)/2;
        if (arr[i][mid] == key){
            cout<<"The Value Found At" <<i<<","<<mid;
            end = mid-1;
            start = 0;
        }
        else{
            start = mid+1;
            end = (n * m )- 1 ;
        }
     }
     cout<<arr[i][mid];

}

int main() {
    int arr[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int key = 1;
    bruteforce(arr , 3 , 3 , key );
    return 0;
}
*/

/*----Stair Case Search------*/

#include <iostream>
using namespace std;

bool staircase(int arr[4][4], int n, int m, int key)
{
    int i = 0, j = m - 1;

    while (i < n && j >= 0)
    {
       
        if (arr[i][j] == key)
        {
            cout << " Value Found At (" <<i<<","<<j<<")";
            return true;

        }
        else if (arr[i][j] > key){
            // column --
            j--;
        }
        else{
            //  row ++;
            i++;


        }
    }
    cout<<"value Not Found";
    return false;
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {8, 9, 10, 11},
                     {12, 13, 14, 15}};
    int key = 124;
    staircase(arr, 4, 4, key);
    return 0;
}
