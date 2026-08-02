#include<iostream>
using namespace std;

int main() {
    string str = "Hello India Ind";

    // // cout<<str.length()<<endl;
    // // cout<<str.at(4)<<endl;
    // // cout<<str.substr(0,5)<<endl;
    cout<<str.find("Ind",7)<<endl;
  
    return 0;
}