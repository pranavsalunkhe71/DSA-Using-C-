// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){

    
// // // //     int number;
// // // //     do{
// // // //         cout<<"Enter A Number Except Multiple Of 10 : "<<endl;
// // // //         cin>>number;
// // // //         if(number%10==0){
            
// // // //             continue;     
// // // //         }
// // // //         else
// // // //         {
// // // //         cout<<"the number is :"<<number<<endl;
// // // //         }
// // // //     }
    
// // // //     while(true);
// // // //     return 0;

// // // // }




/*   **************** using for loop ****************      */

#include<iostream>
using namespace std;
int main(){

    int i = 1;
    int number;
    
for (i;i>0;i++){
    cout<<"Enter A Number Except Multiple Of 10 : "<<endl;
    cin>>number;

    if(number%10==0){
         continue;
        }
    
    else{
        cout<<"The Number IS : "<<number<<endl;

        
    }

}

return 0;
}