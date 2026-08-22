/*

#include<iostream>
using namespace std;
int linear(int *arr,int key,int len){

    for (int i = 0 ; i<=len;i++){

        if (key == arr[i]){

            return i;
        }


    }
            return -1;



}

int main() {
    int arr[5]={1,34,66,44,23};
    int key = 66;
    int len = sizeof(arr)/sizeof(int);

    cout<<linear(arr,key,len);

    return 0;


}
 */

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