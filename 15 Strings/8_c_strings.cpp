#include<iostream>
#include<cstring>
using namespace std;

/*
There Are 5 difference between char array and C-Strings
1. c++ string are object of predefined class string in STL but char array are not object of any class
2. c++ string have a useful memeber function but char array do not have any member function
3. c++ string are dynamically allocated but char array are statically allocated
4 . c++ string support like + , == , < , > operator but char array do not support these operator
5. c++ string stored contiguously in memory but char array may not stored continuously in memory
*/
int main() {
    // // string s1 = "Hello World";
    // // cout<<s1;

    // // string s2 ;
    // // /*So basically using cin for string same as char array where the ,, if we used blank space*/
    // // /*between the input text so it will consider the text before blank space only to overcome*/
    // // /*this problem  we used getline() instead of cin*/
    // // cin>>s2;
    // // cout<<s2;



    string s3;
    getline(cin,s3);
    cout<<s3;
    return 0;
}