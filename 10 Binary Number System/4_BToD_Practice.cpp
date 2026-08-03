#include<iostream>
#include<cmath>
using namespace std;

void BToD(int binary){

    int i = 0 ;
    int Decimal = 0 ;
    while(binary>0){

        Decimal +=  binary % 10 * pow(2,i) ;
        binary /= 10 ;
        i++;
    }
 

    cout<<Decimal;

}
int main(){
    
BToD(1011);


    return 0 ;
}