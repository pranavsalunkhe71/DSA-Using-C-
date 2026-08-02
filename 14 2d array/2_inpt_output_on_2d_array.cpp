#include<iostream>
using namespace std;

int main() {
     int arr[2] [4] ;

    int n = 2, m = 4;
    for (int i = 0 ; i < n ; i++){
        for (int j=0 ; j <m; j++){
            cout<<"enter value for "<<i<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for (int i = 0 ; i < n ; i++){
        for (int j=0 ; j <m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}