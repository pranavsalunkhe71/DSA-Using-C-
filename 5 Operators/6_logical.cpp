#include<iostream>

using namespace std;
int main(){

cout<<((3>5) && (5<7))<<endl; //final resultl false 0
cout<<((5>3) && (5<7))<<endl; //final resultl true 1


cout<<((3>5) || (5<7))<<endl; //final resultl true 1
cout<<((5>3) || (5<7))<<endl; //final resultl true 1
cout<<((5<3) || (5<3))<<endl; //final resultl false 0



cout<<(!(5<3))<<endl; //final resultl true 1

    return 0;
}