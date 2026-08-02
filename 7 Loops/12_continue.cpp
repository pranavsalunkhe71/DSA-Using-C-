/*#include<iostream>
using namespace std;
int main(){

int i=1;

for(i;i<=10;i++){

    if(i==4){
        continue;
    }
    else{
    cout<<i<<endl;
    }
}
    return 0;
}*/



#include<iostream>
using namespace std;

int main() {
    int n ;


    while ( n > 0){

        cout<<"Enter Value Only Multiple Of 10 : ";
        cin>>n;

        if (n % 10==0){

            continue;

        }
        else {
            break;
        }


    }
    cout<<"Exited From Loop";

    return 0;
}
