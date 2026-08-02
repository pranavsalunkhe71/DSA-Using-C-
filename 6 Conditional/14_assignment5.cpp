#include<iostream>

using namespace std;

int main(){

int number  ;

cout<<"Enter A Number : ";
cin>>number;
///333

int n = number;

int dig1 = n % 10;
n/=10;
int dig2 = n % 10;
n/=10;
int dig3 = n % 10;

int cubesum = (dig1*dig1*dig1) +(dig2*dig2*dig2) +(dig3*dig3*dig3);

if(cubesum == number){


    cout<<"The Number "<<number<<" Is An Armstrong ";
}
else{
    cout<<"The Number "<<number<<" Is Not An Armstrong ";


}





    return 0;
}

