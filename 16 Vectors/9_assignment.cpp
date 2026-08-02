#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> waterstore(vector<int> vec, int size)
{

    int lp = 0;
    int rp = size - 1;
    int maxwater = 0 ;
    while (lp < rp)
    {

        int width = rp - lp ;
        int height = min(vec[rp],vec[lp]);
        int currentwater = height * width ; 
        maxwater = max(maxwater,currentwater);

        if (vec[rp]<vec[lp]){
            rp--;
        }
        else{
            lp++;
        }
        
    }
    vector<int> ans ;
    ans.push_back(maxwater);
    return ans;
}

int main()
{
    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector <int> result = waterstore(vec, vec.size());
    cout<<result[0];
    return 0;
}