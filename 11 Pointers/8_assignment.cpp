

#include<iostream>
using namespace std;


void multiply(int &a , int &b , int &c){

    a*=2;
    b*=2;
    c*=2;
    

}


int main(){
// // int x ;
// // int *ptr;
// // x = 7 ;
// // ptr = &x;
// // cout<<*ptr;




// int x= 1,y=2,z=3;
// multiply(x,y,z);
// cout<<"x : "<<x<<"y : "<<y<<"z : "<<z<<"\n";




int a = 32;
int *ptr = &a;

char ch = 'A';
char &cho = ch;

cho +=a;
*ptr +=ch;
cout<<a<<","<<ch<<"\n";

    return 0;
}