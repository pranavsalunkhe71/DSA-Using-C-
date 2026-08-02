#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str1[100];
    // // // str1 = "Hello World";    /*This WOnt WOrk So We Used strcpy*/
    // strcpy(str1,"hello world ");
    // cout<<" "<<str1<<endl;



    // /*This Below USed To String concatenate*/
    // char str2[10] = " Hello ";
    // char str3[10] ="bro ";
    // // // cout<<str2+str3;  /*This Wont work so we used strcat*/
    // cout<<strcat(str2,str3);
    
    
    
    
    /*The String compare using the function strcmp*/
    /*Here if the second string is big so then return positive number*/
    /*Here if the first string is big so then return negative number*/
    /*Here if the both string is equal so then return 0 number */
    char str4[10] = "abc";
    char str5[10] ="abc";
    cout<<strcmp(str4,str5);
    
    return 0;
}