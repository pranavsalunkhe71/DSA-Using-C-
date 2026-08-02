// // // /*An auxiliary array is an additional array used to store extra or temporary data during program execution.*/
// // // #include<iostream>
// // // using namespace std;


// // // int trappingwater(int *height , int n){

// // //     int leftmax[20000] , rightmax [20000];
// // //     leftmax[0] = height[0];
// // //     rightmax[n-1] = height[0];
// // //     // // // cout<<rightmax[n-1]<<",";
// // //     // // // cout<<lefttmax[n-1]<<",";
// // //     for (int i = 1 ; i < n ; i++){
        
// // //         leftmax[i] = max(leftmax[i-1],height[i-1]);
// // //         // cout<<leftmax[i]<<",";
        
// // //     }
    
// // //     for (int i = n-2 ; i >= 0 ; i-- ){
        
// // //         rightmax [i] = max(rightmax[i+1],height[i+1]);
        
// // //     }
// // //     int watertrapped = 0 ;
// // //     for (int i = 0 ; i < n ; i++){
// // //     int currentwater = min(leftmax[i],rightmax[i])-height[i];

// // //     if (currentwater>0){
// // //         watertrapped+=currentwater;
// // //     }
// // //     }
// // //     return watertrapped;



// // // }

// // // int main() {
// // //     int height[7] ={4,2,0,6,3,2,5};
// // //     int n = sizeof(height) / sizeof(int);
// // //     cout<<trappingwater(height,n);
    
// // //     return 0;
// // // }








#include<iostream>
using namespace std;

int watertrap(int *height , int n ){

int leftmax[20000];
int rightmax[20000];

leftmax[0] - height[0];
rightmax[n-1] = height[n-1];


for (int i = 1 ; i < n ; i++){
    
    leftmax[i] = max(leftmax[i-1], height[i-1]);
 
    
}
cout<<endl;
for (int i = n-2 ; i >= 0 ; i--){
    
    rightmax[i] = max(rightmax[i+1], height[i+1]);
    
}
int watertrapped = 0 ;

for (int i = 0; i < n ; i++){
    int currentwater = min(leftmax[i],rightmax[i]) - height[i]; 
    if (currentwater > 0){
        watertrapped+=currentwater;
    }}
    return watertrapped;

}


int main() {
    int height[7] = {4,2,0,6,3,2,5};
    int n = sizeof(height) / sizeof(int);
    cout<<watertrap(height,n);
    return 0;
}