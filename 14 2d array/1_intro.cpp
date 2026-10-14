#include <iostream>
using namespace std;

int main()
{
    int marks[3][3] = {{100, 100, 100}, {95, 57, 99}, {100, 98, 100}};
    int n = sizeof(marks) / sizeof(marks[1]);

    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}