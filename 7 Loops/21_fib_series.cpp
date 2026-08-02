/*#include<iostream>
using namespace std;
int main(){


int first = 0;
int second = 1;

int inputnum;
int i = 2;

cout<<"how much number do you want in first series : ";
cin>>inputnum;
cout<<first<<"\n"<<second<<endl; 


while(i<=inputnum){
    int third = first + second;
    first = second;
    second = third;

    cout<<third<<"\n";
    i++;
}



    return 0;
}*/




#include<iostream>
using namespace std;
int main(){

int n = 10 ;
int num1 = 0;
int num2 = 1;

for(int i = 0 ; i < n ; i++){

    cout<<num1<<endl;
    int add = num1 + num2 ;
    num1 = num2;
    num2 = add;


}
    return 0;
}