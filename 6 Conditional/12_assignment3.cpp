#include<iostream>
using namespace std;

int main() {
    int a = 63, b = 36;
    bool x = (a < b) ? true : false;   // if a<b, x=true else x=false
    int y = (a > b) ? a : b;           // if a>b, y=a else y=b

    cout << x << "," << y << endl;     // x will print 0 (false), y will print 63

    return 0;
}
