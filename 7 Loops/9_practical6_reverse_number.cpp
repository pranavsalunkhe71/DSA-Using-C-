/*#include<iostream>

using namespace std;

int main(){

int number = 1987;
int reverse=0;

while(number>0){

int lastdigit = number%10;

reverse = reverse*10+lastdigit;  //// logi
number/=10;


}

cout<<reverse;



    return 0;
}*/



#include <iostream>
using namespace std;
int main()
{

    int n = 12345;
    int rev = 0 ;
    int SumofNUm = 0;
    
    while (n > 0)
    {
       int rem =  n % 10 ;
                n /= 10;
        rev = rev * 10 + rem;
        SumofNUm +=rem;




    }
    cout<<rev<<endl;
    cout<<SumofNUm;

    return 0;
}