#include <iostream>
using namespace std;

bool ispalindrome(char word[], int n)
{
    int start = 0;
    int end = n - 2;
    while (start <= end)
    {
        if (word[start] != word[end])
        {
            cout << "Not A Valid Palindrome";
            return false;
            start++;
            end--;
        }
        cout << "The Data Is Palindrome";
        return true;
    }
    return false;
}

int main()
{
    char word[] = "racecar";
    ispalindrome(word, 7);
    return 0;
}