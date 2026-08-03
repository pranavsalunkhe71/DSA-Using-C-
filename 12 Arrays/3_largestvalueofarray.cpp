

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {3,5,22,6,88};
//     int max = arr[0];
//     int min = arr[0];
//     int size = sizeof(arr)/sizeof(int);
//     for (int i = 0 ; i<size ; i++){

        

//         if (arr[i]>max){
//             max = arr[i];
//         }

//     }
//     for (int i = 0 ; i<size ; i++){

        

//         if (arr[i]<min){
//             min = arr[i];
//         }

//     }

//     cout<<"The Max Value From Array Is : "<<max;
//     cout<<"The Min Value From Array Is : "<<min;
//     return 0;
// }





#include<iostream>
using namespace std;



int main() {

    int arraysize = 0;
    cout<<"enter size for array : ";
    cin>>arraysize;

    int arr[arraysize] ;
    int n = sizeof(arr) / sizeof(int);;
    int Largest = 0;
    int Smallest ;

    for(int i = 0 ; i< n ; i++){
        cout<<"Enter array element : ";
        cin>>arr[i];

    }


    for(int i = 0 ; i < n ; i++){

        if(arr[i] > Largest){
            Largest = arr[i];
        }
        if(arr[i] < Smallest){
            Smallest = arr[i];
        }

    }

    cout<<Largest;
    cout<<Smallest;


    return 0;
}
