



#include<iostream>
using namespace std;

int main() {
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;
    int n = 5;

    for (int i =0 ; i<n;i++){

        cout<<num3;
        num1 = num2;
        num2 = num3 ;
        num3 = num1 + num2;


    }

    return 0;
}