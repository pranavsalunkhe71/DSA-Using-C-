#include<iostream>
using namespace std;
int main(){

    int *ptr = NULL;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";// segmentation error the lines after this cannot prints or works
    cout<<"hello";

    return 0;
}