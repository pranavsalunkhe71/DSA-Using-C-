/*An auxiliary array is an additional array used to store extra or temporary data during program execution.*/

#include <iostream>
using namespace std;

void watertrap(int *height, int n)
{
    int LeftMAx[20000];
    int RightMax[20000];
    int AllWaterTrap = 0;
    LeftMAx[0] = INT_MIN;
    RightMax[n - 1] = INT_MIN;

    for (int i = 1; i < n; i++)
    {

        LeftMAx[i] = max(height[i - 1], LeftMAx[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--)
    {

        RightMax[i] = max(RightMax[i + 1], height[i + 1]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        int minvalue = min(LeftMAx[i], RightMax[i]);

        if (minvalue - height[i] > 0)
        {
            AllWaterTrap += minvalue - height[i];
        }
        
    }

    cout << "All Water Trap is : " << AllWaterTrap;
}

int main()
{
    // int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int height[7] = {1,2,3,4,5,6,7};
    int n = sizeof(height) / sizeof(int);
    watertrap(height, n);
    return 0;
}