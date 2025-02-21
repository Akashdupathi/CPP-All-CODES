#include <iostream>
using namespace std;
int main()
{

    char ch;
    cin>>ch;
    if((ch >= 65 && ch<=90))
    cout<<"The character is uppercase Alphabet";
    if(ch >= 97 && ch<=122)
    cout<<"The character is  lowercase Alphabet";
    else cout<<"The charcater is not a alphabet";
    return 0;
}