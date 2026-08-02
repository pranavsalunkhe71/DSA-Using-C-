// // #include <iostream>
// // using namespace std;

// // int main() {

// // // int marks[5]={2,3,24,53,65};
// // // int length = sizeof(marks) / sizeof(int);

// // // for (int i=0;i<length;i++){
// // //     cout<<marks[i]<<"\n";
// // // }



// // //talking the length from user for array
// // int n;
// // cout<<"enter a value for length of array :";
// // cin>>n;
// // int arr[n];

// // int length = sizeof(arr)/sizeof(int);
// // for (int i = 0;i<length;i++){

// // cout<<"enter the "<<i<<" value for array : ";
// // cin>>arr[i];

// // }

// // for (int i = 0;i<length;i++){
// // cout<<"the value of array is : "<<arr[i]<<"\n";
// // }







// //     return 0;
// // }


#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<< "enter a size of array : ";
    cin>>n;
    int arr[n] ;


    int size = sizeof(arr) / sizeof(int);

    for (int i = 0 ; i < size ; i++){
    cout<<"enter a values for array :";
    cin>>arr[i];
                                    }

    for (int i = 0 ; i< size ; i++){
        cout<<arr[i]<<",";  
        
    }


    return 0;
}