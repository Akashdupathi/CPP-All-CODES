#include <iostream>
using namespace std;
int main()
{

    double num1, num2;
    char ch;
    cin>>num1>>ch>>num2;
    switch(ch)
    {
        case '+' : cout<<num1 + num2;
        break;
        case '-' : cout<<num1 - num2;
        break;
        case '*' : cout<<num1 * num2;
        break;
        case '/' : 
                   if(num2 == 0)
                   cout<<"error divide by 0";
                   else
                   num1 / num2;
        break;
        default: cout<<"wromg input";

    }
    

    return 0;
}