
#include<iostream>

using namespace std;
int main(){

int tax;


cout<<"Enter A How Much Tax Do You Paid : "<<endl;
cin>>tax;

int tax1 = (0.20*tax) ;
int tax2 = (0.30*tax)  ;

if(tax>=0 && tax<=500000){

    cout<<"The Money After Tax Is : "<<tax<<endl;

}
else if (tax >=500000 && tax<=1000000){

    cout<<"The Money After Tax Is : "<<tax1<<endl;

}
else{

    cout<<"The Money After Tax Is : "<<tax2<<endl;

}





    return 0;
}