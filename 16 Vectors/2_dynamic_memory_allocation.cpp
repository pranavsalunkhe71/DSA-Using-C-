#include <iostream>
using namespace std;


void funcInt(){

    int *ptr = new int ;
    *ptr = 5;
    cout<<*ptr;

    delete ptr;
}


void func()
{
    int size;
    cin >> size;

    int *arr = new int[size];

    int x = 1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }

    delete [] arr;  // free space
}

    int main()
    {
        // func();
        funcInt();

        // // // int arr[100] = {1,2,3,4,5};
        // // int size;
        // // cin>>size;

        // // int *arr = new int[size];

        // // int x = 1 ;
        // // for (int i = 0 ; i < size ; i++){
        // //     arr[i] = x;
        // //     cout<<arr[i]<<" ";
        // //     x++;
        return 0;
    }

