#include<iostream>
using namespace std;

int main() {
    string str = "hello world";

    // for (int i = 0 ; i < str.length();i++){
    //     cout<<str[i];
    // }



    for (char ch : str){
        cout<<ch;
    }
    return 0;
}