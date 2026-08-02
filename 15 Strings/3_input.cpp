#include<iostream>
#include<cstring>
using namespace std;

int main() {
//     char word[10];
//     cin>>word;  // cin will ignore the space and take only first word suppose if we input "hello world" it will take only "hello"
//     cout<<word;


    char sentence[30];
    cin.getline(sentence,30,'.');  //cin.getline() function is used to take the input with spaces 
    cout<<sentence;
    return 0;
}   