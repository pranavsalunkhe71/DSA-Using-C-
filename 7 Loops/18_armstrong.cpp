// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){

// // // // // int number ;
// // // // // cout<<"enter a number";
// // // // // cin>>number;
// // // // // int n = number;
// // // // // int armstrong;
// // // // // int multiplication = 0;

// // // // // while(n>0){

// // // // // armstrong = n%10;
// // // // // multiplication += (armstrong*armstrong*armstrong);
// // // // // n /= 10;

// // // // // }

// // // // // if (multiplication == number)
// // // // // {
// // // // //     cout<<"the number is armstrong";
// // // // // }

// // // // // else
// // // // // {
// // // // //     cout<<"the number is not armstrong";
// // // // // }

// // // // //     return 0;
// // // // // }




#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n = 407;
    int tempN = n ;
    int ArmStrong = 0 ;
    while (tempN > 0)
    {
       int temp = tempN % 10;
       ArmStrong += pow(temp,3);
       tempN /= 10;
    }

    if (n==ArmStrong){
        cout<<"this is armstrong number";
    }
    else{
        cout<<"this is not an armstrong number";

    }
    

    return 0 ;
}