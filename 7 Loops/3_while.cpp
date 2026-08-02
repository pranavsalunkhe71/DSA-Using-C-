/*#include<iostream>
using namespace std;

int main(){

int i = 0;

while (i<10){
    cout<<"HELLO\n";
    i++;

}




    return 0;
}*/


#include<iostream>
using namespace std;
 int main(){

    int number ;
    cout<<"enter a number: ";
    cin>>number; 

    int sum = 0;
    int i = 0;
    while(i<=number){
        sum+=i;
       
        i++;
    }
     cout<<sum<<endl;

    return 0 ;
 }