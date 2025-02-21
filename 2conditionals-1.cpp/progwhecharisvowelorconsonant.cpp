#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch >= 65 && ch <=90 || ch >= 97 && ch <= 122)
    {
        if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u')
        cout<<"The character is vowel";
        else
        cout<<"The character is consonant";

    }
    else
cout<<"The charcter is not a alphabet";

    return 0;
}