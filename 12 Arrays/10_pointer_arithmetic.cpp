// /*Addition And Substraction Of Constants*/ 
// #include<iostream>
// using namespace std;

// int main() {
//     int arr = 20;
//     int *ptr = &arr;
//     cout<<ptr<<endl;
//     cout<<ptr+4<<endl;
    
//     return 0;
// }




/* here we are adding 4 to the pointer value,
 which moves the pointer by 4 integer spaces*/



 #include<iostream>
 using namespace std;
 

 int printarr(int *ptr , int length){

    for (int i = 0 ; i < length ; i++)
    {
        cout<<*ptr<<endl;
        ptr++;

    }


 }
 int main() {
     int arr [5] = {1,2,3,4,5};
     int n = sizeof(arr) / sizeof(int);
     printarr(arr,n);

     return 0;
 }