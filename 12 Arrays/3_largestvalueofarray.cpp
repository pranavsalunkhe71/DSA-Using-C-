#include<iostream>
using namespace std;

int main() {
    int size;
    int bigger = 0;
    cout<<"enter size of array : ";
    cin>>size;

    int arr[size];
    
    
    cout<<"enter "<<size<<" elements : "<<endl;

    for(int i = 0 ; i < size ; i++){

        cout<<"enter array element : ";
        cin>>arr[i];

    }
    cout<<"[";
    for(int i = 0 ; i < size ; i++){
        
        cout<<arr[i]<<",";
        
    }
    cout<<"]";

    for(int i = 0 ; i < size ; i++){

       if(arr[i] > bigger){

        bigger = arr[i];

       }

    }
    cout<<endl;
    cout<<"Biggest Element is : "<<bigger;



    return 0;
}