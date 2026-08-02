#include<iostream>
using namespace std;


// pass by reference using pointers
// void changeab(int *ptr){
//     *ptr = 20;
//     cout<<"the value of a and b both is : "<<*ptr;  
// }


// pass by reference using reference variables
void changeab(int &a){
    a = 20;
    cout<<"the value of a and b both is : "<<a;  
}



int main(){


int a = 10;
// int &b = a;
// // so now a and b will locate same memory location

// b = 22;
changeab(a);

cout<<"the value of a and b is : "<<a;


    return 0;
}
















// #include<iostream>
// using namespace std;
// int main(){
//     return 0;
// }