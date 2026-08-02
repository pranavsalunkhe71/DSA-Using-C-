#include<iostream>
using namespace std;


int main() {
   int arr[5] = {5, 10, 15, 20, 25};
   int *ptr1 = arr;
   int *ptr2 = ptr1 + 3;    

   cout<<*ptr1<<endl;
   cout<<*ptr2<<endl;
    cout<<(ptr2 > ptr1)<<endl; 
    /*here we are comparing two pointers, which gives true if ptr2 is greater
    (means 1) than ptr1 else (means 0) false*/
    
    cout<<(ptr1 == arr)<<endl; 
    return 0;
}