#include<iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 1 ;i<=n ;i++){
        for(int space = 1 ; space <= (n-i) ;space++){
            cout<<" ";
        }

        for(int revnum = i ; revnum >= 1 ; revnum--){
            cout<<revnum;
        }


        for(int forwardnum = 2 ; forwardnum <= i ; forwardnum++){
            cout<<forwardnum;
           
        }
        cout<<endl;

    }
    return 0;
}