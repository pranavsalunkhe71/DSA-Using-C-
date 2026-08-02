// /*Brute Force Approach*/

// #include<iostream>
// #include<vector>
// using namespace std;

// int bruteforce(vector<int> vec , int n , int target){

// int result ;

// for (int i = 0; i < n ; i++){
//     for(int j = i+1 ; j < n ; j++){
//         result = vec[i] + vec[j];
//         if (target == result){
//             cout<<" the result found at "<< vec[i] <<" & "<< vec[j] << " is at location "<<"("<<i<<","<<j<<")" ;
//             return result ;
//         }

//     }
// }
// return -1;

// }

// int main() {
//     vector <int> vec = {2,7,11,15};
//     int target = 22 ;
//     bruteforce(vec,vec.size(),target);
//     return 0;
// }






/*optimized*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> vec, int target)
{

    int start = 0, end = vec.size() - 1;
    vector<int> ans;
    int result;
    while (start < end)
    {

        result = vec[start] + vec[end];
        if (result == target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if ( result > target ){
            end--;
        }
        else{
            start++;
        }
        
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 22;
    vector <int> final = pairsum(vec, target);
    cout<<final[0]<<","<<final[1];
    return 0;
}