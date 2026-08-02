#include<iostream>

using namespace std;
int main(){
int math;
int cns;
int dbms;

cout<<"enter a marks of math : ";
cin>>math;
cout<<"enter a marks of cns : ";
cin>>cns;
cout<<"enter a marks of dbms : ";
cin>>dbms;


int average= (math+cns+dbms)/3;
cout<<"The Average of the three subjects : "<<average;


    return 0 ;
}