

#include<iostream>

using namespace std;
int main(){

float num1;
float num2;

cout<<"Enter A First Number : ";
cin>>num1;
cout<<"Enter A Second Number : ";
cin>>num2;

char button;
cout<<"Press + For add : \nPress - For sub: \nPress * For mul: \nPress / For div :\n";
cin>>button;

switch (button)
{
case '+':{
    cout<<"num1 + num2 : "<<num1+num2<<endl;
}
break;
case '-' :{
    
    cout<<"num1 - num2 :"<<num1-num2<<endl;
}
break;
case '*' :{
    cout<<"num1 * num2 : "<<num1*num2<<endl;
    
}
break;
case '/' :{
    cout<<"num1 / num2 : "<<num1/num2<<endl;

}
    break;

default:
    break;
}




    return 0;
}










