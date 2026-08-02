#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4}; 
    cout<<"size of vector before inc : "<<vec.size()<<endl;
    cout<<"capacity of vector before inc : "<<vec.capacity()<<endl;
    
    
    
    /* this function is used to add the data at the at the end of vector*/
    vec.push_back(5);
    cout<<"size of vector after inc : "<<vec.size()<<endl;
    cout<<"capacity of vector after inc : "<<vec.capacity()<<endl;
    vec.push_back(6);
    cout<<"size of vector after inc : "<<vec.size()<<endl;
    cout<<"capacity of vector after inc : "<<vec.capacity()<<endl;
    vec.push_back(7);
    cout<<"size of vector after inc : "<<vec.size()<<endl;
    cout<<"capacity of vector after inc : "<<vec.capacity()<<endl;
    vec.push_back(7);
    cout<<"size of vector after inc : "<<vec.size()<<endl;
    cout<<"capacity of vector after inc : "<<vec.capacity()<<endl;
    
    
    
    /* it is used to remove element from vecctot*/
    vec.pop_back();
    cout<<"size of vector after dec : "<<vec.size()<<endl;
    cout<<"capacity of vector after indecc : "<<vec.capacity()<<endl;
    return 0;
    
}