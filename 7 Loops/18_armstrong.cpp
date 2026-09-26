#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int number = 0;
    int ArmStrong = 0 ;
    cout << "Enter a number : ";
    cin >> number;
    int TempNum = number;
 
    


    for(int i = 0 ; i < 3 ; i++){

        int Temp = number % 10;
        ArmStrong += (Temp * Temp * Temp);
        number /= 10;

    }

    if(TempNum==ArmStrong){
        cout<<"The Number Your Entered Is Armstrong";
    }
    else{
        cout<<"The Number Your Entered Is Not Armstrong";

    }


    return 0;
}