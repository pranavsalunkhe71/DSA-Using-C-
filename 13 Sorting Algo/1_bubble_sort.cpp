// // #include<iostream>
// // using namespace std;

// // int printbuble(int arr [] , int n){
// //     for (int i = 0 ; i < n ; i++){
// //         cout<<arr[i];
// //     }
// //     cout<<"\n";
// // }
// // int bubble(int arr[] , int n ){
// //     int temp = 0 ;
// //     for(int i = 0 ; i < n - 1 ;  i++){
// //         bool isswap = false;
// //         for(int j = 0 ; j < n-i-1 ;  j++){
            
// //             if (arr[j] > arr[j+1]){

// //                swap(arr[j],arr[j+1]);
    
// //             }

// //             if (!isswap){
// //                 /* Array is already sorted */
// //                 return ;
// //             }
            
// //         }
// //     }
// //     printbuble(arr,n);
    
// //     }



// // int main() {
// //     int arr[5] = {5,4,-1,-3,2};
// //     int len = sizeof(arr) / sizeof(int);
// //     bubble(arr,len);
// //     return 0;
// // }



#include<iostream>
using namespace std;

int printsorted(int *ptr , int n ){
for(int i = 0 ; i < n ; i++){
    cout<<ptr[i];
}
cout<<endl;
}

int bubble(int *arr , int n){

    for (int i = 0 ; i < n-2 ; i++){
        bool isswap  = false;
        for (int j = 0 ; j < n-i-1 ; j++){

            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }

            if(!isswap){
                //
                return ;
            }

        }
        
    }

printsorted(arr,n);


}

 int main() {
    int arr[5] = {5,4,-1,-3,2};
    int len = sizeof(arr) / sizeof(int);
    bubble(arr,len);
    return 0;
}