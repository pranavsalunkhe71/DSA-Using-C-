/*Question1:Count how many times lowercase vowels (a e i o u) appear in a string entered by the user*/

#include<iostream>
#include<cstring>
using namespace std;

void lowercasevowel(string str){

    int count = 0; 
   
    for (int i = 0 ; i < str.length() ; i++){
       if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
       }
    }

    cout<<"The Vowels Found : " << count <<" times in string";
}
   



int main() {
    string str = "hello beautiful";
    lowercasevowel(str);
    return 0;
}