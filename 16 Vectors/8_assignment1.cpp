// // #include<iostream>
// // #include<vector>
// // #include<cstring>
// // using namespace std;

// // int main() {
// //     vector <int> vec = {1,2,2,4};
// //     int i = 0 ;
// //     int missing = -1 ;
// //     int duplicate = -1 ;
// // for (int i = 0 ; i< vec.size();i++){
    
// //     if (vec[i] != i+1)
// //    {
// //         missing = i+1;
// //         duplicate = vec[i];
// //    }
// //     }
// //     cout<<"the missing value is : " <<missing;
// //     cout<<"the duplicate value is : " <<duplicate;
// //     return 0;
// // }

#include<iostream>
#include<vector>
using namespace std;

vector<int> finderrornumber(vector<int> &nums){

    vector<int> ans;
    int n = nums.size();
    vector<bool> ispresent(n+1,false);

    // find duplicate
    for(int i = 0; i < n; i++){
        if(ispresent[nums[i]]){
            ans.push_back(nums[i]);   // duplicate
        }
        ispresent[nums[i]] = true;
    }

    // find missing
    for(int i = 1; i <= n; i++){
        if(!ispresent[i]){
            ans.push_back(i);   // missing
            break;
        }
    }

    return ans;
}

int main(){
    vector<int> vec = {1,2,2,4};

    vector<int> result = finderrornumber(vec);

    cout<<"Duplicate value is: "<<result[0]<<endl;
    cout<<"Missing value is: "<<result[1]<<endl;

    return 0;
}





