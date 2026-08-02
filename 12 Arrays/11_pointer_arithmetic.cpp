// // // #include<iostream>
// // // using namespace std;


// // // int main() {
// // //    int a = 5;
// // //    int *ptr1 = &a;
// // //    int *ptr2 = ptr1 + 3;    

// // //    cout<<ptr1<<endl;
// // //    cout<<ptr2<<endl;
// // //    cout<<ptr2 - ptr1; 
// // //    /*Substraction of pointers gives the number of elements between them*/
// // //     return 0;
// // // }
#include<iostream>
using namespace std;


int main() {
   int arr[5] = {5, 10, 15, 20, 25};
   int *ptr1 = arr;
   int *ptr2 = ptr1 + 3;    

   cout<<*ptr1<<endl;
   cout<<*ptr2<<endl;
    cout<<ptr2 - ptr1;
   /*here we are subtracting two arrays elements, which gives the all  elements between them*/
    return 0;
}