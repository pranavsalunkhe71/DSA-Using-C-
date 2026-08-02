// // // #include<iostream>
// // // using namespace std;

// // // bool isprime(int n){

// // //     if (n==1){
// // //         return false;
// // //     }
// // //     for (int i =2 ; i<n ; i++){

// // //         if(n % i==0){

// // //            return false;
// // //         }
// // //     return true;

// // //     }


// // //     return true;    
// // // } 

// // // bool isprime1 (int n){

// // //     if(n==1){
// // //         return false;
// // //     }
// // //     for(int i =2 ;i*i<=n;i++){
// // //         if(n % i == 0){
// // //             return false;
// // //         }
        

// // //     }
// // // return true;    
// // // }

// // // int main(){

// // //     cout<<isprime(6)<<endl;
// // //     cout<<isprime1(5);

// // //     return 0; 
// // // }





#include<iostream>
using namespace std;


void isprime(){

    bool primenum = true;
    int number ; 
    cout<<"enter a number : ";
    cin>>number;


    for(int i = 2 ; i < number ; i++){

        if(number % i == 0){
            primenum = false;
            break;
        }
        

    }


    if(primenum){
        cout<<"the entered number is prime";
    }
    else{
        cout<<"the entered number is not prime";

    }

}



int main() {
isprime();
    
    return 0;
}