// // #include<iostream>
// // using namespace std;
// // void dtob(int decimal){
// //     int n = decimal;
// //     int pow = 1;
// //     int binarynumber = 0 ;

// //     while (n>0){
// //         int remainder = n % 2;
// //         binarynumber += remainder *  pow;
// //         n/=2;
// //         pow = pow * 10;
// //     }

// //     cout<<"The Binary Number Is : "<<binarynumber<<endl;
// // }

// // int main(){
// //     dtob(3);

// // return 0;
// // }

#include <iostream>
#include <cmath>
using namespace std;
void decimaltobinary(int decimal)
{
    int TempDecimal = 0 ;
    int i = 0 ;
    while(decimal>0){

        TempDecimal = pow(10, i) *( decimal % 2) ;
        decimal /= 10 ;
        i++;
    }
    
    cout<<TempDecimal;
}

int main()
{
    decimaltobinary(4);

    return 0;
}