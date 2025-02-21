#include <iostream>
using namespace std;
int main()
{
    int x=5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<&x<<endl<<x<<endl;
    cout<<ptr<<endl<<*ptr<<endl;
    cout<<*p<<endl<<**p<<endl;


    return 0;
}