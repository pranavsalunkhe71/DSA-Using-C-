// #include<iostream>
// using namespace std;
// int main(){

// int a = 19;
// int *ptr = &a;
// int **pptr = &ptr;
// cout<<ptr<<endl;
// cout<<pptr;

//     return 0;
// }




#include<iostream>
using namespace std;

int main() {
    
    int a = 10 ;
    int *ptr = &a;
    int **pptr = &ptr;

    cout<<&a <<" = "<<ptr<<"\n";
    cout<<pptr <<" = "<<&ptr<<"\n";

    return 0;
}


