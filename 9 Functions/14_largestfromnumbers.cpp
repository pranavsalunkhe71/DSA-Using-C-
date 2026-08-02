#include<iostream>
using namespace std;

int findlarget(){
    int num1 , num2 ,num3;

        cout<<"Enter A Value";
        cin>>num1;
        cout<<"Enter A Value";
        cin>>num2;
        cout<<"Enter A Value";
        cin>>num3;

        if(num1 > num2 && num1 > num3 ){
            cout<<num1<<" is Greater";
        }
        else if(num2 > num1 && num2 > num3)
        {
            cout<<num2<<" is Greater";
            
        }
        else{
            cout<<num3<<" is Greater";

        }




    return 0 ;
}

int main() {
    findlarget();
    
    return 0;
}