#include<iostream>
using namespace std;

int main() {
    
    int number = 0 ; 
    int isPrime = true;
    cout<<"Enter a number : ";
    cin>>number;


    if(number<=1){
        isPrime = false;
    }

    for(int i = 2 ; i < number ;i++){

        if(number%i == 0){
           isPrime = false;
           break;
        } 
      
    }

    if(isPrime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";

    }


    return 0;
}