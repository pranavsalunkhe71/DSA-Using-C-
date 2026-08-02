#include<iostream>
using namespace std;

int selection(int *ptr , int n ){
    for (int i = 0 ; i < n-1 ; i++){    
        int minindex = i ; 
        for (int j = i+1 ; j < n ; j++)
        {
           if (ptr[j] < ptr[minindex]){
             
            minindex = j;

           }
        }
        swap(ptr[i] , ptr[minindex]);

         

    }
    for (int i = 0; i < n; i++)
    {
        cout<<ptr[i];
    }
    
}


 int main() {
    int arr[5] = {5,-4,-1,3,2};
    int len = sizeof(arr) / sizeof(int);
    selection(arr,len);
    return 0;
}