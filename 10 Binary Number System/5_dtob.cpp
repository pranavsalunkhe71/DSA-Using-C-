#include<iostream>
using namespace std;

void dtob(int decimal){
int n = decimal;
int binary = 0;
int pow = 1;


while(n>0){

  int remainder =  n % 2;
  binary += remainder * pow;
  n /= 2; 
  pow = pow * 10;


}
cout<<"the decimal to binaary is :"<<binary;




}
int main(){
dtob(3);
    return 0 ;
}