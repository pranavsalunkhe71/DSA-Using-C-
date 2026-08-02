// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){

// // // //     int n = 5;
// // // //     for(int i = 1 ; i<=n; i++){

// // // //         // num spaces
// // // //         for(int j =1 ;j<=(n-i);j++){
// // // //             cout<<" ";
// // // //         }

// // // //         //num backward
// // // //         cout<<endl;
        


// // // //     }





// // // //     return 0;
// // // // }



// #include<iostream>
// using namespace std;

// int main() {
//     int n = 5 ;
//     for(int i = n ; i > 1 ; i--)
//     {
//         for(int j = 0 ; j < i ; j++){
//             cout<<" ";
//         }

//     }
    


    

//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int n = 5 ;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 0 ; j < (n-i) ; j++){
            cout<<" ";
        }
        for(int k = i ; k >=1 ; k--){
            cout<<k;
        }
        for(int l = 2 ; l <= i ; l++){
            cout<<l;
        }
        cout<<endl;

    }
    


    

    return 0;
}