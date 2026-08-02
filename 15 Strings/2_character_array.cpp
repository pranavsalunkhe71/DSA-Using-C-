#include<iostream>
#include <cstring>
using namespace std;

int main() {
    // char arr[5] = {'a','b','c','d','e'};
    // char arr1[5] = {'c','o','d','e','\0'};

    // cout<<arr<<endl;  // it will print extra values becasue character array always ends with \0
    // cout<<arr1<<endl;


    /*// there is 7  instead of 6 beacasuse in strings the \0 is automatically added at the end*/
    /*This below is 4 way to create the array */
    char arr3 [7] = "pranav"; 
    // char arr3 [] = "pranav"; 
    // char arr3 [] = {'p','r','a','n','a','v','\0'}; 
    // char arr3 [100] = {'p','r','a','n','a','v','\0'}; 
    cout<<strlen(arr3); /*this is how you print string length*/

    
    return 0;
}