// // // // #include<iostream>
// // // // using namespace std;

// // // // int factorial(int n){
// // // //     int fact = 1;

// // // //     for (int i =1;i<=n;i++){
// // // //         fact *= i;
// // // //     }
// // // //     return fact;

// // // // }


// // // // int binfact (int n , int r){

// // // //     int val1 = factorial (n);
// // // //     int val2 = factorial (r);
// // // //     int val3 = factorial (n-r);

// // // //     int result = val1 / (val2*val3);
// // // //     return result;
// // // // }
// // // // int main(){
// // // //     // cout<<factorial(3);
// // // //     cout<<binfact(4,2);
// // // //   return 0;
// // // // }



#include<iostream>
using namespace std;

int factorial(int number){
    int fact = 1 ;


    for (int i = 1 ; i<=number ; i++){

        fact*=i;
    }
    return fact ;
}

int binomialcoefficient(int n , int r){
  

    int coeff = factorial(n) / (factorial(r) * factorial(n - r));
    cout<<coeff;
    return 0 ;
}

int main() {
    binomialcoefficient(4,2);


    return 0;
}