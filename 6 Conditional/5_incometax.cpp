#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int income ;
    cout<<"Enter a income : ";
    cin>>income;

    if (income < 5 * pow(10,5)){

        cout<<"Tax is "<<income;
    }

    else if ( income <= 10 * pow(10,5))
    {
        cout<< (income * 20) / 100; 
    }
    else
    {
        cout<< (income * 30) / 100; 
    }
    return 0 ; 
}