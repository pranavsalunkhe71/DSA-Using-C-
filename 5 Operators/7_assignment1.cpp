#include<iostream>
using namespace std;

int main() {
    int x = 2, y = 5;
    int exp1 = (x * y / x);     // expression 1
    int exp2 = (x * (y / x));   // expression 2

    cout << exp1 << ",";        // output exp1
    cout << exp2 << "\n";       // output exp2

    return 0;
}
