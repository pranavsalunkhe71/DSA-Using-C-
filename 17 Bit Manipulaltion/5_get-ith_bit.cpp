#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int getithbit(int num , int i){

int shift = 1 << i ;

if (!(num & shift)){
    
    return 0;
}
else{
    return 1;
}


}
int main() {

cout<<getithbit(7,1);
    return 0;
}