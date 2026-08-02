// // array is always call  by referennce


// #include<iostream>
// using namespace std;

// void function(int arr[]){

//     arr[0] = 1000; //change the value of arr[0] to 1000

// }

// void printarray(int nums[]){

//     cout<<"the all elements of array is : ";

//     int length = sizeof(nums) / sizeof(int);

//     for (int i = 0;i<length;i++){
//         cout<<nums[i]<<endl;
//     }

// }

// int main(){


//     int arr[5] = {1,2,3,4,5}; 


//     cout<<arr<<endl; //size of array
//     cout<<*arr<<endl; //arr[0]
//     cout<<*arr+1<<endl; //arr[1]
//     cout<<*arr+2<<endl; //arr[2]
//     cout<<*arr+3<<endl; //arr[3]



//     function(arr);
//     cout<<arr[0]<<"\n";
//     printarray(arr);


//     return 0 ;
// }