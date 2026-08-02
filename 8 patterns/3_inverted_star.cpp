// // #include <iostream>
// // using namespace std ;
// // int main () {
// // for ( int i = 1 ; i <= 4 ; i++){

// //         for ( int j = 4 ; j >= i ; j--){


// //             cout<<"*";
// //         }
// //         cout<<endl;
// // }
// //     return 0 ;
// // }



/*       **********  using a formula below  ************    */

// // // #include <iostream>
// // // using namespace std ;
// // // int main () {
 

// // // int n = 4;

// // // for (int i = 1 ; i <= 4 ; i++ ){
// // //     for ( int j = 1 ; j <= (n-i+1) ; j++ ){

// // //         cout<<"*";

// // //     }
// // //     cout<<endl; 


// // // }
// // //     return 0 ;
// // // }

 /* n-i+1 */



 #include<iostream>
 using namespace std;
 
 int main() {
    int n = 4;
     
    for (int i = 0 ; i <= n ; i++)
    {
        for(int j = 0 ; j < n - i ; j++){
            cout<<"*";
        }
        cout<<endl;


    }

     return 0;
 }