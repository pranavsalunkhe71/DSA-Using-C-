/* Question 3 : Given an integer array nums, find a subarray that has the largest
product, and return the product. The test cases are generated so that the answer will
fit in a 32-bit integer. [link]
Note - This Qs might feel difficult as a beginner because it uses DP approach.
Examples :
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Input: intervals =nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray. */






#include<iostream>
using namespace std;

int ProdcutOFSubArray(int arr[] , int n){

    int product = 1 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            int currentproduct = 1 ;
            for(int k = i ; k <= j ; k++ ){

                currentproduct *= arr[k];

                product = max(currentproduct,product);

            }
        }
        
    }
    cout<<product;;


return 0;
}

int main() {
    int arr[4] = {2,3,-2,4};
    int n = sizeof(arr) / sizeof(int);

    ProdcutOFSubArray(arr , n);
    return 0;
}