

#include <iostream>
using namespace std;

int linearsearch(int array[], int n , int key)
{
    for (int i = 0 ; i < n ; i++){

        if(array[i] == key){
            cout<<"the value "<<key<<" is present at "<< i + 1 <<" location";
            break;
        }

    }

    return 0;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int key = 10;

    int n = sizeof(arr) / sizeof(int);

    linearsearch(arr,n,key);

    return 0;
}