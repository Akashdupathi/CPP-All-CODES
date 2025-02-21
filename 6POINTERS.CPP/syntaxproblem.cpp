#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 3;
    int *p = &x, *q =&y;
    cout<<*p<<*q;

    return 0;
}