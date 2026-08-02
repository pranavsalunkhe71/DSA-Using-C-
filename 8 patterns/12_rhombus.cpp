// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){   
    
// // // // int n = 5;
// // // // for (int i = n; i >= 1 ; i--){
// // // //     //for spaces
// // // //     for (int j = 1 ;j<=(i-1);j++){
// // // //         cout<<" ";
// // // //     }

// // // //     //for stars
// // // //     for(int k = 1;k<=5;k++){
// // // //         cout<<"*";
// // // //     }
// // // //     cout<<endl;
// // // // }

    
    
    
// // // //     return 0 ;
// // // // }


#include<iostream>
using namespace std;

int main() {
    
int n = 5;
    for(int i = n ; i >= 1 ; i--){
        for(int j = 1 ; j < i ; j++){
            cout<<" ";
        }
        for(int k = 0 ; k < n ; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}