// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // int main(){ 

// // // // // // // //     int n = 4 ;
// // // // // // // //     for (int i = 1 ; i<= n ; i++){
// // // // // // // //         //for stars
// // // // // // // //         for(int j = 1 ; j<=i ; j++){
// // // // // // // //             cout<<"*";
// // // // // // // //         }
        
// // // // // // // //         //for spaces

// // // // // // // //         for(int k = 1; k <=2*(n-i);k++){
// // // // // // // //             cout<<" ";
// // // // // // // //         }
        
// // // // // // // //         //for stars
// // // // // // // //         for(int l = 1 ; l<=i ; l++){
// // // // // // // //             cout<<"*";
// // // // // // // //         }
// // // // // // // //         cout<<endl;
// // // // // // // //     }
// // // // // // // //     for (int i = n ; i >= 1 ; i--){
// // // // // // // //         //for stars
// // // // // // // //         for(int j = 1 ; j<=i ; j++){
// // // // // // // //             cout<<"*";
// // // // // // // //         }
        
// // // // // // // //         //for spaces

// // // // // // // //         for(int k = 1; k <=2*(n-i);k++){
// // // // // // // //             cout<<" ";
// // // // // // // //         }
        
// // // // // // // //         //for stars
// // // // // // // //         for(int l = 1 ; l<=i ; l++){
// // // // // // // //             cout<<"*";
// // // // // // // //         }
// // // // // // // //         cout<<endl;


// // // // // // // //     }




// // // // // // // //     return 0 ;
// // // // // // // //     }


/*  formula : (n-i)*2 */

#include<iostream>
using namespace std;

int main() {
    
    int n = 4 ;
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        for(int k =1 ; k <=(n*2)-(i*2) ; k++){
            cout<<" ";
        }
        for(int l = 1 ; l <=i ; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        for(int k =1 ; k <=(n*2)-(i*2) ; k++){
            cout<<" ";
        }
        for(int l = 1 ; l <=i ; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}