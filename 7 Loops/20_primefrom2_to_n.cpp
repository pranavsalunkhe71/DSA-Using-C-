/* #include<iostream>
using namespace std;

int main() {
bool prime = true;
int n = 2 ;
int number ;
cout<<"enter a positive prime number : ";
cin>>number;


if (number > 2){

for (int i = 2 ; i <number ; i++){

     prime = true;

    for (int j = 2;j<i;j++){

        if ( i % j == 0){
            prime = false;
            break;
        }


}
if (prime){
        cout<<i<<"\n";

    }



}
}
  else{
        cout<<"enter a positive number ";

    }



return 0 ;} */

#include <iostream>
using namespace std;
int main()
{

    int n = 15;
    for (int i = 2; i < n; i++)
    {
        bool primenum = true;
        for (int j = 2 ; j < i; j++)
        {

            if (i % j == 0)
            {
                primenum = false;
                break;
            }
            else
            {
                primenum = true;
            }
        }

        if (primenum)
        {
            cout << i << "is prime"<<endl;
        }
    }

    return 0;
}