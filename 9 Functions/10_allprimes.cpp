// // // #include<iostream>
// // // using namespace std;

// // // int isprime(int n){

// // //     if(n==1){
// // //         return false;
// // //     }

// // //     for (int i = 2 ; i< n ; i++){
// // //         if(n % i == 0){
// // //           return false;
// // //         }
// // //         else {
// // //             return true;
// // //         }

// // //     }
// // //     return true;
// // // }

// // // void allprimes(int n){
// // //     for(int i = 2 ;  i<=n ; i++){
// // //         if(isprime(i)){
// // //             cout<<i<<endl;
// // //         }

// // //     }
// // // cout<<endl;
// // // }
// // // int main(){
// // //     allprimes(15);
// // //     return 0;
// // // }

// #include<iostream>
// using namespace std;

// int allprime(int number){
//     bool isprime = true;

//       if(number <= 1){
//             return isprime = false;
//         }

//     for(int i = 2 ; i < number ; i++){
//         if( number % i == 0 ){
//            return isprime = false;
//         }

//     return true;
//     }

// return 0 ;

// }

// int checknprime(int n){
//     for(int i = 2 ; i < n ; i++){
//         if(allprime(i)){
//             cout<<i<<endl;
//         }
//     }
// }

// int main(){
// checknprime(10);

//     return 0 ;
// }




#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 2; i < n; i++)
    {
        bool isPrime = true;

        for (int j = 2 ; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                
            }

        }

        if(isPrime){
            cout<<i<<endl;
        }
    }
    return 0;
}