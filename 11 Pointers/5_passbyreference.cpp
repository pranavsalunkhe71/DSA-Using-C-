
// // // #include<iostream>
// // // using namespace std;

// // // void changea(int *a){
// // //     *a = 10;
// // //     cout<<"value of a : "<<*a<<"\n";

// // // // pass by reference so the value of will be changed in original variable also

// // // }
// // // int main(){

// // // int a = 20;
// // // changea(&a);
// // // cout<<a; 

// // //     return 0;
// // // }



/* here below code demonstrates pass by value if we use pass
by reference then use & instead of * */
// #include<iostream>
// using namespace std;

// void chnageA(int a){
//     a = 20;
//     cout<<a;
// }

// int main() {
    
// int a = 10 ;
// chnageA(a);
// cout<<a;

//     return 0;
// }



#include<iostream>
using namespace std;

void chnageA(int *ptr){
    *ptr = 20;
}

int main() {
    
int a = 10 ;
chnageA(&a);
cout<<a;

    return 0;
}