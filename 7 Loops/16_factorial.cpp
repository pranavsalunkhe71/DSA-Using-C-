#include<iostream>
using namespace std;

int main() {
    int num = 0 ;
    int fact = 1 ;
    cout<<"Enter a value : ";
    cin>>num;

    for(int i = 1 ; i <= num ; i++){
        fact *= i ;
    }


    cout<<"Factorial is : "<<fact;

    return 0;
}