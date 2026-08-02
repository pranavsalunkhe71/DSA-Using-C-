// #include<iostream>
// using namespace std;

// int sumof(int n ){
//     int sum = 0 ;
   

//    while( n > 0){
//      int lastdigit = n % 10 ;
//      sum +=lastdigit;
//         n/=10;
//    }
   
//    return sum ;

// }


// int main() {
//   cout<<sumof(124);
    
//     return 0;
// }











#include<iostream>
using namespace std;


int FindSum(int number){

  int TempNum = number ;
  int sum = 0 ; 
 while (TempNum > 0)
 {
    sum += TempNum % 10 ;
    TempNum /= 10 ;
 }


 cout<<sum;
 
  return 0 ;
}

int main() {

  FindSum(151);
    return 0;
}