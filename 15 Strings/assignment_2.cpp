#include <iostream>
using namespace std;
void swapped(string str1, string str2)
{

    if (str1.length() == str2.length())
    {
        cout << "string 1 is :" << str1 << endl;
        cout << "string 2 is :" << str2 << endl;

        int a, b, selected;
        cout << "which string you want to swap :";
        cin >> selected;
        cout << "enter index to be swapped ";
        cout << "enter your first index  ";
        cin >> a;
        cout << "enter your second index  ";
        cin >> b;

        if (selected == 1)
        {

            swap(str1[a], str2[b]);
        }

        else if (selected == 2)
        {
            swap(str2[a], str2[b]);
        }
    }
    if (str1 == str2)
    {

        cout << "this both strings after the swap is :" << str1 << ","<< str2 ;
        
    }
    else{
        cout << "this both strings after the swap is :" << str1 << ","<< str2 << " this cant match" ;

    }
}

int main()
{
    string str1 = "rajesh";
    string str2 = "sureshs";
    swapped(str1, str2);
    return 0;
}