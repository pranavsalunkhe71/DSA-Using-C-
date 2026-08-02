/*#include<iostream>
using namespace std;
int main(){

int n;
bool isprime =true;


cout<<"Enter A Number : ";
cin>>n;

for (int i=2 ;i<n;i++){

    if(n%i == 0){
        isprime = false;
        break;
    }

}

if(isprime==true){

    cout<<"Number Is Prime";

}
else{

    cout<<"Number Is Not Prime";
}



    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{

    int number = 0;
    int count = 0;
    int InputNum = 0;
    cout << "enter a number to check if it is prime or not : ";
    cin >> number;
    if (number > 1)
    {
        InputNum = number;

        for (int i = 2; i <= InputNum; i++)
        {

            if (number % i == 0)
            {
                count += 1;
            }
        }
        if (count > 1)
        {
            cout << "the number is not prime";
        }
        else
        {
            cout << "the number is prime";
        }
    }
    else
    {
        cout << "Please Enter A Valid Number";
    }

    return 0;
}