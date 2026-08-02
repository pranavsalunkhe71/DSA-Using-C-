//Arithmetic , sub , divide , multiply , modulo


#include <iostream>

using namespace std;
int main(){
int a = 10;
int b = 5;

cout<<"+"<<a+b<<endl;
cout<<"-"<<a-b<<endl;
cout<<"/"<<a/b<<endl;
cout<<"*"<<a*b<<endl;
cout<<"%"<<a%b<<endl;


// unary operators 
     
int num1 = 3;
int num2 = num1++ ;    // first use then increment

cout<<"num1 : "<<num1<<endl;
cout<<"num2 : "<<num2<<endl;


int num3 = 3;
int num4 = ++num3 ;    // first increment then use 

cout<<"num3 : "<<num3<<endl;
cout<<"num4 : "<<num4<<endl;


int num5 = 3;
int num6 = --num5 ;    // first decrement then use 

cout<<"num5 : "<<num5<<endl;
cout<<"num6 : "<<num6<<endl;


int num7 = 3;
int num8 = num7-- ;    // use then decrement

cout<<"num7 : "<<num7<<endl;
cout<<"num8 : "<<num8;
    return 0 ;


    /* ****Assignment Operator*****
    
    +=
    -=
    *=
    /=
    
    */
}