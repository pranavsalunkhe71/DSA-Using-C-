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







/* #include<iostream>
using namespace std;

int main() {
    int arr[] = {70,309,90,403} ;

    int n = sizeof(arr) / sizeof(int);
    for(int i = 0 ; i < n ; i++ ){

        cout<<arr[i]<<endl;

    }
  


    return 0;
} */














#include<iostream>
using namespace std;

int main() {

    int arraysize = 0;
    cout<<"enter size for array : ";
    cin>>arraysize;

    int arr[arraysize] ;
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0 ; i < n ; i++ ){
        cout<<"enter element for array no "<<i<<" : ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    




    return 0;
}