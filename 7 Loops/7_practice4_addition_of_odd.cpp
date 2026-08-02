/*#include<iostream>
using namespace std;

int main(){

int number ;
cout<<"Enter A Number : ";
cin>>number;

int i = number;
int sum = 0;

while(number>0){

int digit = number % 10;




if ((digit%2) != 0)
{
    sum+=digit;
}
number /= 10;
    i--;
}

cout<<"The Addition Of Odd Number Is : "<<sum;


    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{

    int num = 123457;
    int OddSum = 0;
    while (num > 0)
    {
        int LastDigit = num % 10;
        if (LastDigit % 2 != 0)
        {
            OddSum += LastDigit;
        }
        
        num /= 10;
    }

    cout << OddSum;

    return 0;
}