#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
int n = 9;
bool number = true;
int i = 2 ;

    while ( i  < sqrt(n)){

        if (n % i == 0){
          number =  false;
          break;
        }
      

        i++;
        

    }

    if (number){

        cout<<"it is prime number ";
    }
    else{
        cout<<"number is not prime";
    }

    return 0;
}