#include<iostream>
#include<cmath>
using namespace std;

void DToB(int decimal){

  int TempNum = 0 ;
  int i = 0 ;
  while (decimal > 0){

    TempNum += decimal % 2 * (pow(10,i));
    decimal /= 2 ;
    i++;
  }

  cout<<TempNum;

  }
  


int main(){
DToB(4);
    return 0 ;
}