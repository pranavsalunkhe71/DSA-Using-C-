#include <iostream>
#define  ll long long
using namespace std;

int main(){

const float pi = 3.14;

float zero = 0;

ll g = 9.9;        /* here you can write ll only instead of long long ***********here we used a macros****************/


// pi = 3.12;  // it cannot be changed because its already defined
zero = 1;


cout<<"pi : "<<pi;
cout<<"zero : "<<zero;



    return 0;
}



/*
we can define constants and macros in program
macros = #define pi 3.14
constansts = const float pi = 3.14
***********************************
so what is difference between constants and macros ??
the constants will need to run the code to initialize value to it
the macros will do not need to run to assign value to macros

*/