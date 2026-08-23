
// #include<iostream>
// using namespace std;

// int main() {
    

//     int x = 10 ;
//     int *ptr = &x;
//     int y = 20;
//     ptr = &y;
//     cout<<*ptr;
//     return 0;
// }

/* This Above Thing is possible */






/* AND this below is not possible .. where we try to overwrite the memory address of array 
with the memeory addres of another varibale y */

#include<iostream>
using namespace std;

int main() {

    int arr[5]  ;
    int y = 20;
    arr = &y;
    cout<<arr;
    return 0;
}