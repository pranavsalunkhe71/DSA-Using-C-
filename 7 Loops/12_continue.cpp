#include<iostream>
using namespace std;

int main() {
        int n = 10 ;
        for(int i =0 ; i < n;i++){
            
            if(i == 3){
                continue;
            }
            cout<<i;
        }
    return 0;
}