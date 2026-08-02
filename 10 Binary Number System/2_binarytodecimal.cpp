
// #include<iostream>
// using namespace std;
// void btod(int binary){
// int n = binary;
// int decimal = 0 ; 
// int pow = 1 ; 


// while(n >0){
// int lastdigit = n % 10 ;
// decimal += lastdigit * pow ;
// pow = pow * 2;
// n /= 10;

// }
// cout<<decimal<<endl;


// }

// int main(){
// btod(1100);

//     return 0;
// }



#include<iostream>
#include<cmath>
using namespace std;

int btod(int binary){

  int Decimal = 0 ;
  int i = 0 ;
  while (binary>0)
  {

    Decimal += binary % 10 * pow(2,i);
    binary /= 10; 

  
    i++;
  }
  

  cout<<Decimal;

  return 0;
}

int main() {

  btod(10010);
    
    return 0;
}