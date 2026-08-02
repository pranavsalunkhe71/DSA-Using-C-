#include<iostream>
#include<iomanip>
using namespace std;

int main(){
cout<<fixed<<setprecision(2)<<10/5.000<<"\n";
cout<<10.000/5<<"\n";

cout<<('A'+1)<<"\n";    /* it will give the memeory address of A and add 1 to it i.e 66 i.e char is
                           converted to in as hierarchy given below*/

cout<<('a'+1);
    return 0; 
}

// bool -> char -> int -> float -> double
/*
this above is the heirarchy for a implicit type casting if we have an integer number then it will converted to float or double

*/
