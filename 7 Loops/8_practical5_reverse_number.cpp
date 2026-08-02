/*#include<iostream>
using namespace std;

int main(){

int n = 10829;




while(n>0){
    int digit = n%10;
    cout<<digit;
    n/=10;
   
}
    return 0;
}*/

#include<iostream>
using namespace std;

int main() {
    int n = 10829;
    int rev = 0 ;

    while (n>0){

         int dig = n  % 10;
         rev = rev * 10 + dig;
         n /= 10;


    }
    cout<<rev;


    return 0;
}

