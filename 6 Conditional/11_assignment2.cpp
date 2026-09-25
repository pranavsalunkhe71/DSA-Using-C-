#include<iostream>
using namespace std;

int main() {
    int year ;
    cout<<"Enter a year to see if its leap year or not ?";
    cin>>year;


    if ((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0 ){
        cout<<"Leapp Year";
    }
    else{
        
        cout<<" NOt Leap Year";
    }

    return 0;
}