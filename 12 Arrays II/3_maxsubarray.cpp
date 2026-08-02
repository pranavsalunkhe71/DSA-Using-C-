// #include<iostream>
// using namespace std;

// void maxsubarray(int *arr , int n ){
//     int maxsum = INT_MIN ;                      

//     for (int start = 0 ; start < n ; start++){
//         int currentsum = 0;
//         for (int end = start ; end <  n ; end++){
//             /*here we completly remove the loop to get better time complexity */
//             currentsum +=arr[end];
//             maxsum = max(currentsum,maxsum);
//         }
    
//     }
    
//     cout<<"The Max Value is : "<<maxsum;


// }

// int main() {
//       int arr[6] = {2,-3,6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);

//     maxsubarray(arr,n);
    
//     return 0;
// }
#include<iostream>
using namespace std;

void maxsubarray(int *arr , int n ){
    int maxsum = INT_MIN ;                      
    
    for (int start = 0 ; start < n ; start++){
       int currentsum = 0 ;
    for(int end = start ; end < n ; end++){
        currentsum += arr[end];
        maxsum = max(maxsum,currentsum);
    }

}
cout<<"The Max Value is : "<<maxsum;  
    }
int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxsubarray(arr,n);
    
    return 0;
}