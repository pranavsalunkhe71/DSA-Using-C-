#include<iostream>
#include<vector>
#include<cstring>
using namespace std;


vector <int> tripletaddition (vector <int> nums , int n ){

    vector <vector<int>> ans ; 
    for (int i = 0 ; i < n ; i++ ){

        for (int j = 0 ; j < n ; j++ ){

        for (int k = 0 ; k < n ; k++ ){

            if (nums[i]+nums[j]+nums[k] == 0){
                ans.push_back({nums[i],nums[j],nums[k]});
               
            }
            
        }
    }
    return ans;
}
    



}

int main() {
    vector <int> nums = {-1,0,1,2,-1,-4};
    vector <vector<int>> answer =    tripletaddition(nums,nums.size());
    for (i = 0 ; i< answer.size(); i++){
        cout<<answer[i];
    }
    return 0;
}