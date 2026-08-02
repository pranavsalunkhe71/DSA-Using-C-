// // // // // // // // // // // // #include <iostream>
// // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // int binary(int arr[], int length)
// // // // // // // // // // // // {
// // // // // // // // // // // //     int start = 0;
// // // // // // // // // // // //     int end = length - 1;
// // // // // // // // // // // //     int mid = (start + end) / 2;
// // // // // // // // // // // //     int key;
// // // // // // // // // // // //     cout << "Enter The Key To Be Searched : ";
// // // // // // // // // // // //     cin >> key;
// // // // // // // // // // // //     for (int i = 0; i < end; i++)
// // // // // // // // // // // //     {

// // // // // // // // // // // //         if (arr[key] == arr[mid])
// // // // // // // // // // // //         {
// // // // // // // // // // // //         }

// // // // // // // // // // // //         else if (arr[key] > arr[mid])
// // // // // // // // // // // //         {
// // // // // // // // // // // //             mid = start;
// // // // // // // // // // // //         }
// // // // // // // // // // // //         else if (arr[key] < arr[mid])
// // // // // // // // // // // //         {
// // // // // // // // // // // //             mid = end;

// // // // // // // // // // // //         }
// // // // // // // // // // // //         else{
// // // // // // // // // // // //             cout<<"Element NOt Foun";
// // // // // // // // // // // //         }
// // // // // // // // // // // //     }
// // // // // // // // // // // //     cout << "Element Found At"" Location";
// // // // // // // // // // // // }
// // // // // // // // // // // // int main()
// // // // // // // // // // // // {
// // // // // // // // // // // //     int n;
// // // // // // // // // // // //     cout << "enter the size for array : ";
// // // // // // // // // // // //     cin >> n;
// // // // // // // // // // // //     int arr[n];
// // // // // // // // // // // //     for (int i = 0; i < n; i++)
// // // // // // // // // // // //     {
// // // // // // // // // // // //         cout << "Enter The Array Elements (Must In Sorted) : " << "\n";
// // // // // // // // // // // //         cin >> arr[i];
// // // // // // // // // // // //     }
// // // // // // // // // // // //     int len = sizeof(arr) / sizeof(int);

// // // // // // // // // // // //     binary(arr, len);

// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }

#include <iostream>
using namespace std;

 int binary(int *ptr , int n , int key){
    int start = 0 ;
    int end = n-1;
    while(start<=end){
        int mid = (start + end)/2;
        
        if (key == ptr[mid]){
            return mid;
          
        }
        
    
    else if(ptr[mid] <= key){
        start = mid+1;
       
    }
    else {
            end = mid-1;
           

    }}
    
    return -1;

 }


    int main()
    {
        int arr[] = {23, 243, 246, 343, 534};
        int n = sizeof(arr) / sizeof(int);
        ;

        cout<<binary(arr, n, 534);
        return 0;
    }    