#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main() {
    int a = 0 ;
    cout<< "enter a number : ";
    cin>>a;

    if ((a & 1) == 0){
        cout<<"it is a even number ";
    }
    else{
        cout<<"it is a odd number ";

    }
    return 0;
}