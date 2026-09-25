#include<iostream>
using namespace std;

int main() {
    
    
    do{
        int num ;
        cout<<"enter a num : ";
        cin>>num;

        cout<<num<<endl;
        if(num%10 == 0){
            break;
        }

    }while (true);

    

    return 0;
}