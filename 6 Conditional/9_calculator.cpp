#include<iostream>
using namespace std;

int main() {
    int num1 , num2;
    cout<<"Enter Num1 : ";
    cin>>num1;
    cout<<"Enter Num2 : ";
    cin>>num2;

    string operation ;
    cout<<"Enter a '+' for addition"<<endl;
    cout<<"Enter a '-' for substraction"<<endl;
    cout<<"Enter a '*' for multiplication"<<endl;
    cout<<"Enter a '/' for division"<<endl;
    cin>>operation;


    if (operation == "+"){
        cout<<num1+num2;
    }
    else if (operation == "-"){
        cout<<num1-num2;
    }
     else if (operation == "*"){
        cout<<num1*num2;
    }
    else if (operation == "/"){
        cout<<num1/num2;
    }
    else{
        cout<<"Invalid";
    }

    return 0;
}