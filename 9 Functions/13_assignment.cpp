#include<iostream>
#include<cmath>
using namespace std;

int function(int a , int b){

    int add = pow(a,2) + pow(b,2) + 2*(a*b);

    return add ;
}

int main() {

    cout<<function(4,9);
    
    return 0;
}