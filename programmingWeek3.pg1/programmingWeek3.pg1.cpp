#include<iostream>
using namespace std;
int main()
{


    char ch;


    cout << "Enter a character:";
    cin >> ch;


    if ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ||
        (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        cout << ch << " is vowel \n";
    else cout << ch << " is consonant \n";

    return 0;
}