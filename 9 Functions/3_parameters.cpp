#include<iostream>
using namespace std;

void addition(int a, int b){

    cout<<"addition of two numbers : "<<a+b<<endl;


}
int diff(int a, int b){
    int d = a-b;
    return d;
}


/*this below is the deafult args <we cannot define default argument to first variable>*/
int multiply(int a, int b=2){

    return a*b;
}

int main(){
    addition(1,90);
    int d = diff(3,2);
    cout<<"the difference is : "<<d<<endl;

    cout<<"the multipllication is : "<<multiply(2);
   
    return 0;
}