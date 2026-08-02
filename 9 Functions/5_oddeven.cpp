// #include<iostream>
// using namespace std;

// int evenodd(int a ){

//     if(a % 2 == 0 ){
//         cout<<"the entered number is even";
//     }
//     else{
        
//         cout<<"the entered number is odd";
//     }


// }

// int main(){

//     int even = evenodd(3);
//     cout<<even;
   
//     return 0;
// }




#include<iostream>
using namespace std;


void findoddeven( int num){

    if(num % 2 == 0){
    cout<<"num is even";
    }
    else{
        cout<<"num is odd";
    }


}

int main() {
    findoddeven(5);
    return 0;
}