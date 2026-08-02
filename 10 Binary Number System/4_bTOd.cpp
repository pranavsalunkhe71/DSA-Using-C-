#include<iostream>
using namespace std;

void btod(int binary){
int decimal = 0;
int n = binary;
int pow = 1;
int lastdigit;

while(n>0){

   lastdigit =  n % 10 ;
    decimal += lastdigit*pow;
    n /= 10;
    pow *= 2;
}
cout<<decimal;

}


int main(){
    
btod(111111);


    return 0 ;
}