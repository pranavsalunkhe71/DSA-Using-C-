// // // #include<iostream>
// // // using namespace std;

// // // void maxsubarray(int *arr , int n ){
// // //     int maxsum = INT_MIN ;

// // //     for (int start = 0 ; start < n ; start++){
// // //         for (int end = start ; end <  n ; end++){
// // //             int currentsum = 0;
// // //             for (int i = start ; i <= end ;i++){
// // //                 currentsum += arr[i];
// // //                 maxsum = max(maxsum , currentsum);
// // //             }
// // //             cout<<currentsum<<",";
// // //         }

// // //         cout<<endl;
// // //     }

// // //     cout<<"The Max Value is : "<<maxsum;

// // // }

// // // int main() {
// // //       int arr[6] = {2,-3,6,-5,4,2};
// // //     int n = sizeof(arr)/sizeof(int);

// // //     maxsubarray(arr,n);

// // //     return 0;
// // // }

#include <iostream>
using namespace std;

void maxsubarray(int *ptr, int n)
{

    int maxsum = INT_MIN ;
    for (int start = 0; start < n; start++)
    {
        // cout << "(";
        for (int end = start; end < n; end++)
        {
            int currentsum = 0;
            for (int i = start; i <= end; i++)
            {
                    currentsum += ptr[i];
                    
                   
                        maxsum = max(currentsum,maxsum);
                    

                
            }
        }
        // cout << ")";
        // cout << "\n";
    }
    cout << maxsum ;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxsubarray(arr, n);
    return 0;
}