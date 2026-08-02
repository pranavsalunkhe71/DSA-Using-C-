

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
