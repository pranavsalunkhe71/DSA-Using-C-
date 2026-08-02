
#include<iostream>

using namespace std;
int main(){
int num1 ;
int num2 ;
int num3 ;

cout<<"enter a first number  :"<<endl;
cin>>num1;
cout<<"enter a second number  :"<<endl;
cin>>num2;
cout<<"enter a third number  :"<<endl;
cin>>num3;


if((num1>=num2 &&  num1>=num3)){

    cout<<"The Number One Is Largest"<<endl;
    
}

else if(num2>=num3){
    
    cout<<"The Number Two Is Largest"<<endl;
    
}

else{
    cout<<"The Number Three Is Largest"<<endl;

}


    return 0;
}

    

