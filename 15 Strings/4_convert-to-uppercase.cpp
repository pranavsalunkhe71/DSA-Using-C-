#include<iostream>
#include <cstring>
using namespace std;

void toupper(char arr[] , int n ){
for (int i = 0 ; i < n ; i++){
    char ch = arr[i];
    if(ch >= 'A' && ch <= 'Z'){
       continue;
 }
 else {
    arr[i] = ch - 'a' + 'A';
 }
}
cout<<arr;
}
int main() {
    char word [] = "ApplE";
    toupper(word,strlen(word));
    return 0;
}