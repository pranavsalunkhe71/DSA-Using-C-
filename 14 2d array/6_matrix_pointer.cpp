#include <iostream>
using namespace std;


void func1(int arr[][3] , int n , int m)
{
// cout<<"The 0th Row is : "<<arr<<endl;  // pointer of row
// cout<<"The 1st Row is : "<<arr+1<<endl; // pointer of row
// cout<<"The 2nd Row is : "<<arr+2<<endl; // pointer of row



/*This below is the how you print the element using referencing and dereferecing*/
cout<<*(*(arr+2)+2);
}

void func2(int (*arr)[3], int n, int m) {
// cout<<"The 0th Row is : "<<arr<<endl; // pointer of row
// cout<<"The 1st Row is : "<<arr+1<<endl; // pointer of row
// cout<<"The 2nd Row is : "<<arr+2<<endl; // pointer of row
}

int main()
{
    int arr[3][3] = { {1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}

    } ;

    func2(arr,3,3);
    func1(arr,3,3);
    return 0;
}