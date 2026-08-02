#include<iostream>
#include <algorithm>
using namespace std;

bool isanagram(string str1 ,  string str2 ){

    if (str1.length() !=  str2.length()){
        cout<<"not valid";
        return false;
    }


    int count[26] = {0};
    for (int i = 0 ; i < str1.length() ; i++){
        int index = str1[i] - 'a';
        count[index]++;
    }
    for (int i = 0 ; i < str2.length() ; i++){
        int index = str2[i] - 'a';
        
        if (count[index] == 0){
            return false;
        }
        count[index]--;
    }
    cout<<"valid anagram";
    return true;

}

int main() {
   string str1 = "nana";
   string str2 = "nagaram";


  isanagram(str1,str2);
    return 0;
}