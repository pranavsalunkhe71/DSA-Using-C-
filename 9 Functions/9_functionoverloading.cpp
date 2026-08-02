// function with same function name same return type but different types of paramters 
// #include<iostream>
// using namespace std;

// void sum(int a , int b){

//     cout<<a+b<<endl;
    
// }
// void sum(double a , double b){

//     cout<<a+b<<endl;
    
// }
// void sum(double a , double b ,double c){

//     cout<<a+b+c<<endl;
    
// }

// int main(){

// sum(2,3);
// sum(2.1,34.4);
// sum(2.1,34.4,100.4);


//     return 0;
// }












#include<iostream>
using namespace std;

int sum(int a , int b ){
    return a+b;
}
double sum(double a , double b ){
    return a+b;
}

int sum(int a , int b , int c){
    return (a+b)-c;
}

int main() {
   cout<< sum(1,2)<<endl;
   cout<< sum(1.0,2.6)<<endl;
   cout<< sum(1,2,1);
    return 0;
}