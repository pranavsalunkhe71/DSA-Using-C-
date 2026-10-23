#include <iostream>
using namespace std;

void SpiralMatrix(int arr[4][4], int n, int m)
{

    int sr = 0, sc = 0, er = n - 1, ec = m - 1;

    while (sr <= er && sc <= ec)
    {
        
        
        /* Top */
        for (int i = sc; i <= ec; i++)
        {
            cout << arr[sr][i] << " ";
        }
   

        
        
        /* Right */

        for (int i = sc + 1; i <= er; i++)
        {
            cout << arr[i][er] << " ";
        }
      

        
        
        /* Bottom */

        for (int i = ec - 1; i >= sc; i--)
        {
            if(sr == er){
                break;
            }
        
           cout << arr[er][i] << " ";
        }
        
        
        
        /* Left */
  
        for (int i = er - 1; i > sr; i--)
        {
            if(sc == ec){
                break;
            }
            cout << arr[i][sr] << " ";
        }
    

        sr++;
        sc++;
        er--;
        ec--;
    }
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][1]);
    SpiralMatrix(arr, n, m);
    return 0;
}