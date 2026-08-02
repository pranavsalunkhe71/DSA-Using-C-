// // // #include<iostream>
// // // using namespace std;


// // // int printarr(int *arr,int n){

// // //     for (int i = 0 ; i<n;i++){

// // //     cout<<arr[i]<<"\n";
// // //     }



// // //     return 0;
// // // }


// // // int main() {
// // //     int arr[4]={13,232,24,535};
// // //     int n = sizeof(arr)/sizeof(int);
// // //     cout<<"n :"<<n; 
// // //     int copyarr[n];
// // //     for (int i = 0 ;i<n;i++){
// // //         int j = n-i-1;
// // //         copyarr[i]=arr[j];

// // //     }
// // //     for (int i = 0 ;i<n;i++){
// // //         arr[i]=copyarr[i];
// // //     }

// // //     printarr(arr,n);
// // //     return 0;
// // // }




// #include<iostream>
// using namespace std;

// int reverse(int arr[],int len){
//     for (int i = 0 ; i<5 ;i++){

//         cout<<arr[i]<<"\n";
//     }
//     return 0;
// }

// int main() {

//     int arr[5]={5,4,3,2,1};
//     int length = sizeof(arr)/sizeof(int);
//     int copyarr[length];

//     for (int i = 0 ;i<=length;i++){
//             int j = length - i - 1;
//             copyarr[i]=arr[j];
//     }
//     for (int i = 0 ;i<5;i++){

//         arr[i]=copyarr[i];
//     }


//     reverse(arr,length);
    
//     return 0;
// }

#include<iostream>
using namespace std;
int reverse(int *ptr , int n ){
    int reversearr [5] ;
    for(int i = 0 ; i < n ; i++){
        reversearr[i] = ptr[n-i-1];
    }
    for(int i = 0 ; i < 5 ; i++){
        cout<<reversearr[i]<<",";
    }

}

int main() {
    int arr[5]={5,4,3,2,1};
    int length = sizeof(arr)/sizeof(int);
    reverse(arr,length);
    return 0;
}