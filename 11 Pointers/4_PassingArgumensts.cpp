// /* ===================PassByValue================= */

// #include<iostream>
// using namespace std;

// int ChangeA(int a){

//     a = 20; 
//     cout<<"I Am a From ChnageA Function "<<a<<"\n";

//     return 0 ;
// }

// int main() {

//     int a = 10 ;
//     ChangeA(a);
//     cout<<"I Am a From main Function "<<a<<"\n";

//     return 0;
// }




/* ===================PassByReference Using Pointer================= */

// #include<iostream>
// using namespace std;

// int ChangeA(int *ptr){

//     *ptr = 20; 
//     cout<<"I Am a From ChnageA Function "<<*ptr<<"\n";

//     return 0 ;
// }

// int main() {

//     int a = 10 ;
//     ChangeA(&a);
//     cout<<"I Am a From main Function "<<a<<"\n";

//     return 0;
// }









/* ===================PassByReference Using Reference Variables================= */



/* #include<iostream>
using namespace std;

int main() {

    int a = 10 ;
    int &b = a ;
    b = 20;
   
    cout<<"I Am a From main Function "<<a<<"\n";
    cout<<"I Am a From main Function "<<b<<"\n";

    return 0;
} */





#include<iostream>
using namespace std;

int ChangeA(int &a){

    a = 20; 
    cout<<"I Am a From ChnageA Function "<<a<<"\n";

    return 0 ;
}

int main() {

    int a = 10 ;
    ChangeA(a);
    cout<<"I Am a From main Function "<<a<<"\n";


    return 0;
}
