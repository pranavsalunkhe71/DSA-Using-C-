#include<iostream>
#include<vector>
using namespace std;

int main() {

    // // vector <int > vec1;
    // // cout<<vec1.size()<<endl;
    
    // // vector <int> vector1 = {1,2,3,5};
    // // cout<<vector1.size()<<endl;


    vector <int > v1 (10,-1);
    cout<<v1.size()<<endl;
    for (int i = 0 ; i < v1.size();i++){
        cout<<v1[i]<<endl<<" ";
    }

    return 0;
}