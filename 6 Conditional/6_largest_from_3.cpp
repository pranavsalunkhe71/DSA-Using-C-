#include<iostream>
using namespace std;

int main() {
    int num1 = 121,  num2=22226,  num3 = 1111;
    
    if (num1 > num2 && num1 > num3){
        cout<<"num1 is greater";
    }
    else if (num2 > num1 && num2 > num3){
        cout<<"num2 is greater";
    }
    else{
        
        cout<<"num3 is greater";
    }

    return 0;
}