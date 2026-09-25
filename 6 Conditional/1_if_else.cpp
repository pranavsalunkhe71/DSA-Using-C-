#include<iostream>
using namespace std;

int main() {
    int age ; 
    cout<<"enter a age : ";
    cin>>age;

    if (age > 18){
        cout<<"can vote";
    }
    else{
        cout<<"cannot vote";
    }
    return 0;
}

