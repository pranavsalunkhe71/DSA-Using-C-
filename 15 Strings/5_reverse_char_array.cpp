#include<iostream>
using namespace std;


void reversechar(char arr[7],int n){
    int st = 0 , end = n-1;
    while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;

    }
    cout<<"The Reversed Array is : "<<arr;

}
int main() {
    char arr[7] = {'v','a','n','a','r','p','\0'};

    reversechar(arr,6);
    return 0;
}