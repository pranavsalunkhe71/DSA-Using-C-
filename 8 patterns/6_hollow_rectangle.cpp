#include<iostream>
using namespace std;

int main() {
    int n = 4 ;
    for(int i = 0  ; i < n ; i++){
        
        cout<<"*";


        for(int j = 1 ; j <=(n - 1) ; j++){
            
            if(i == 0 || i == n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
            
        }
        cout<<"*";
        cout<<endl;


    }
    return 0;
}