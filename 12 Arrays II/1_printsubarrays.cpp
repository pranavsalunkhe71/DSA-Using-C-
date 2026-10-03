// /* subarrays is a contiguous part of an array */


/* #include<iostream>
using namespace std;

void PrintSubArray(int *arr , int n ){
    for(int k = 0 ; k < n ; k++){
        for(int i = k ; i < n ; i++){
            for(int j = k ; j <= i ; j++){
                cout<<arr[j]<<",";
            }
            cout<<endl;
        }
        cout<<endl;

        }}
    

    


int main() {
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    PrintSubArray(arr,n);
    return 0;
}

 */




// /* subarrays is a contiguous part of an array */


#include<iostream>
using namespace std;

void PrintSubArray(int *arr , int n ){
    
        for(int start = 0 ; start < n ; start++){
            for(int end = start ; end < n ; end++){
                
                for(int elem = start ; elem <= end ; elem++){

                    cout<<arr[elem]<<",";

                }
                cout<<" ";
          
                
                

            }
            cout<<endl;
        }
        cout<<endl;

        }
    

    


int main() {
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    PrintSubArray(arr,n);
    return 0;
}