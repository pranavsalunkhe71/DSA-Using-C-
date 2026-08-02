// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){

// // // //     int value = true;
// // // //     int n = 5;
// // // //     for (int i = 0 ; i<n ; i++){
// // // //         for(int j = 0 ;j<=i ; j++){
// // // //             cout<<value;
// // // //             value= !value;
// // // //         }
// // // // cout<<endl;
// // // //     }

// // // //     return 0 ;
// // // // }




#include<iostream>
using namespace std;

int main() {
    

    int n =  5;
    // int IsTrue = 1;
    bool val = true;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            // cout<<IsTrue;
            cout<<val;
            val = !val;

            /* if(IsTrue == 1){
                IsTrue = 0 ;
            }
            else{
                IsTrue = 1 ;

            } */
        }
        cout<<endl;
    }
    return 0;
}
