#include<iostream>
using namespace std;

int main() {
    
    int a = 4;
    int *aptr = &a;

    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;




    char ch = 'a';
    char *chptr = &ch;
    cout<<chptr;
    chptr++;
    cout<<chptr;
    chptr++;
    cout<<chptr;
    


    return 0;
}



/* when you say aptr++, it increments the pointer by the
 size of the data type it points to. In this case,
  since aptr is a pointer to an integer, 
  it will increment by 4 bytes (assuming 32-bit integers). */



