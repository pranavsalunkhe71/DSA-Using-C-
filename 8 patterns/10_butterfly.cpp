#include<iostream>
using namespace std;

int main() {
        int n = 4;
        for(int i = 0 ; i<n ;i++){

            for(int j = 0 ; j <= i ;j++){
                cout<<"*";
            }
            for(int space = 0 ; space < (6-i*2) ;space++ ){
                cout<<" ";
            }
            for(int k = 0 ; k <= i ;k++){
                cout<<"*";
            }
            cout<<endl;

        }
       
        for(int i = (n-1) ; i>=0 ;i--){

            for(int j = 0 ; j <= i ;j++){
                cout<<"*";
            }
            for(int space = 0 ; space < (6-i*2) ;space++ ){
                cout<<" ";
            }
            for(int k = 0 ; k <= i ;k++){
                cout<<"*";
            }
            cout<<endl;

        }
       
    return 0;
}