
#include<iostream>

using namespace std;
int main(){

int age ;
bool isAdult;

cout<<"enter a age : "<<endl;
cin>>age;

// // if (age >= 18){

// //     cout<<"The Person Is Adult"<<endl;
// // }
// // else{

// //     cout<<"The Person Is UnderAge"<<endl;
// // }

/*******The Instead Of Above If Else The We Can Use Ternery Operator********** */

isAdult = age>=18 ? true :false;
cout<<isAdult;


    return 0;
}




