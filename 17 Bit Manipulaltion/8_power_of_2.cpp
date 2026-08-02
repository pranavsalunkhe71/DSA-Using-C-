#include<iostream>
using namespace std;

int  powerof2(int num){
 
    int bitmask = num - 1 ;
    if (!(num & bitmask ))
    {
        return true ;
    
    }

    return false ;

}


int main() {
    cout<<powerof2(8);
    cout<<powerof2(7);
    return 0;
}