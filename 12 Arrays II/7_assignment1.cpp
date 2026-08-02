#include<iostream>
using namespace std;

int twice(int *nums , int n ){
    for (int i = 0 ; i <n ; i++){
        for (int j = i+1 ; j < n ; j++ ){
            if ( nums[i] == nums[j]){
                
                return true;
            }}}
           
                
        return false;
    }



int main() {
int nums[] = {1,2,3,4};
int n = sizeof(nums) / sizeof(int);
cout<<twice(nums,n);

    return 0;
}