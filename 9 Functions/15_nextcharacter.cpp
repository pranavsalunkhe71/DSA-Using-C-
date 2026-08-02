


#include<iostream>
using namespace std;


int PrintNextChar(char ch){

    if(ch == 'z'){
        cout<<'a';
        return 0;
    }

    ch++;
    cout<<ch;

    return 0;
}

int main() {
    PrintNextChar('z');
    return 0;
}