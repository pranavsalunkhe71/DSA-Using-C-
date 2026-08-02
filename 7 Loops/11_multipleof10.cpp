/*#include<iostream>
using namespace std;

int main(){
int number;
int i=1;
do {
    if(number%10==0){
        break;
    }
    cout<<"Enter The Value Except Multiple Of 10 : ";
    cin>>number;
 


}
while(true);

cout<<"Loop Is Exited";




    return 0;
}
*/


#include<iostream>
using namespace std;

int main() {
    int n ;


    while ( n > 0){

        cout<<"Enter Value Except Multiple Of 10 : ";
        cin>>n;

        if (n % 10==0){

            break;

        }


    }
    cout<<"Exited From Loop";

    return 0;
}
