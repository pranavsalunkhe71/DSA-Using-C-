// // #include<iostream>
// // using namespace std;
// // int palindrome(int n){
// //     int remainder = 0;
// //     int number = n;
// //     while(n > 0){
// //         int lastdigit = n % 10;
// //         remainder = remainder * 10 + lastdigit;
// //         n = n / 10;
// //     }

// //     if(number == remainder){
// //         cout<<"the number is palindrome";
// //     }
// //     else{

// //         cout<<"the number is not palindrome";
// //     }
// //     return 0;

// // }

// // int main(){

// // palindrome(132);

// //     return 0;
// // }







#include<iostream>
using namespace std;

int IsPlindrome(int number){
    int TempNum = number; 
    int Reminder = 0 ;
    while (TempNum > 0){

        Reminder = (Reminder * 10 ) + (TempNum % 10) ;
        TempNum /= 10 ;
        
    }
   
    if(number == Reminder){
        cout<<number<<" is Palindrome ";
    }
    else{
        
        cout<<number<<" is Not Palindrome ";
    }
    return 0 ;
}


int main() {
    IsPlindrome(1421);
    return 0;
}