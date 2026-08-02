

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {3,5,22,6,88};
//     int max = arr[0];
//     int min = arr[0];
//     int size = sizeof(arr)/sizeof(int);
//     for (int i = 0 ; i<size ; i++){

        

//         if (arr[i]>max){
//             max = arr[i];
//         }

//     }
//     for (int i = 0 ; i<size ; i++){

        

//         if (arr[i]<min){
//             min = arr[i];
//         }

//     }

//     cout<<"The Max Value From Array Is : "<<max;
//     cout<<"The Min Value From Array Is : "<<min;
//     return 0;
// }





#include<iostream>
using namespace std;
void findlargets(int arr[5]){
    int max = arr[0];
    int min = arr[0];
    
    for(int i = 0 ; i < 5 ; i++){

        if (arr[i]>max){
            max = arr[i];
        }
        
        
    }
    cout<<"The Largest Value Is : "<<max;

}

int main() {

    int a [5] = {5,33,65,208,24};
    findlargets(a);
    


    return 0;
}
