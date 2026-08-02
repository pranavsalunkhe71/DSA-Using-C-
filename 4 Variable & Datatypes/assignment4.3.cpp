#include<iostream>

using namespace std;

int main(){

float principle;
float rate;
float time;


cout<<"Enter A Principle : ";
cin>>principle;
cout<<"Enter A Rate : ";
cin>>rate;
cout<<"Enter A Time : ";
cin>>time;

float simple_intrest = (principle*rate*time) /100;

cout<<"The Simle Intrest Is : "<<simple_intrest;
return 0 ;
}