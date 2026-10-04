
/* Given an integer array nums, return true if any value appears at least
twice in the array, and return false if every element is distinct. [link]
Examples :
Input: nums = [1,2,3,4]
Output: false
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true */ 

#include<iostream>
using namespace std;

bool twice(int *nums , int n ){
    int count = 0 ;
    int Temparray[10000] ;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){

            if(nums[i] == nums[j]){
                
                count += 1;
            }
        }
 
    }
if(count>=1){
            return true;
        }
        else{
            return false;
        }
}



int main() {
int nums[] = {1,2,3,4,1};
int n = sizeof(nums) / sizeof(int);
cout<<twice(nums,n);

    return 0;
}