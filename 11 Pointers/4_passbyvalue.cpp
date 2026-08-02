
#include<iostream>
using namespace std;

void changea(int a){
    a = 10;
    cout<<"value of a : "<<a<<"\n";



}
int main(){

int a = 20;
changea(a);
cout<<a; // here the value of a cannot be changed because of pass by value

    return 0;
}