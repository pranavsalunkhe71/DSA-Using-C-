#include<iostream>
using namespace std;
int main(){

    int x = 10 , y = 20 ;
    int *ptr = &x , *ptr2 = &y;
    ptr2 = ptr;

    cout<<"The value of x address is : "<<ptr<<"\n";
    cout<<"The value of y address is : "<<ptr2<<"\n";



    return 0;
}