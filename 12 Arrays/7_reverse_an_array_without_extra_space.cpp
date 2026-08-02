// #include<iostream>
// using namespace std;



// int main() {
//     int arr []= {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);

//     int start = 0 , end = n -1 ;
//     int temp;

//     while (start<end){
//          temp = arr[start];
//          arr[start]=arr[end];
//          arr[end]=temp;
         
     
//         /* This Below Line Is Also Used To Swap*/
//         /* swap(arr[start],arr[end]); */ 
//          start++;
//          end--;


//     }
//     for (int i = 0 ; i<n;i++){
//         cout<<arr[i]<<"\n";
//     }
    

    

//     return 0;
// }

#include<iostream>
using namespace std;
void reversearray(int *ptr , int n ){

int temp = 0 ;
    for (int i = 0 ; i < n/2 ; i++){
    
          
            temp =  ptr[n-1-i];
            ptr[n-1-i]=ptr[i];
            ptr[i] = temp ;
            
    
    

}
for (int i = 0 ; i < n ; i++){
cout<<ptr[i]<<",";
}
    
}

int main() {
    int arr []= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    reversearray(arr,n);
    
    return 0;
}