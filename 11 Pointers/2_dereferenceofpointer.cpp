#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<&a<<endl;
    cout<<"it will give you value stored on pointer : "<<*(&a)<<endl;
    cout<<"it will give you value stored on pointer : "<<*ptr<<endl;

    return 0;
}


