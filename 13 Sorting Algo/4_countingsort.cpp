#include <iostream>
using namespace std;

void countsort(int *arr, int n) {
    int min_value = INT_MAX , max_value = INT_MIN;
    int frequency[100000] = {0} ;
    int j = 0 ;
    
    for(int i = 0 ; i < n; i++){
        min_value = min(min_value,arr[i]);
        max_value = max(max_value,arr[i]);
    }
    
    for(int i = 0 ; i < n ; i++){
        frequency[arr[i]]++;
    }
    
    
    
for(int i = min_value ;  i <= max_value ; i++){

    while (frequency[i] > 0 )
    {
        arr[j] = i;
        j++; 
        frequency[i] -- ;
    }
    

}
for(int i= 0 ; i < n ; i++){
        cout<<arr[i];
    }
       
    }
    
    




int main() {
    int arr[8] = {1,4,1,3,2,4,3,11};   

    
    int n = sizeof(arr) / sizeof(int);

    countsort(arr, n);
    return 0;
}
