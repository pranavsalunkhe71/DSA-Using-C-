#include<iostream>
using namespace std;

void insertion(char ch[], int n) {

    for(int i = 1; i < n; i++) {
        int current = ch[i];
        int prev = i - 1;

        while(prev >= 0 && ch[prev] < current) {
            ch[prev + 1] = ch[prev];   
            prev--;
        }

        ch[prev + 1] = current;         
    }

    for(int i = 0; i < n; i++) {
        cout << ch[i] << " , ";
    }
}

int main() {
    char ch[6] = {'f','b','a','e','c','d'};
    int n = sizeof(ch) / sizeof(char);
    insertion(ch,n);
    return 0;
}   