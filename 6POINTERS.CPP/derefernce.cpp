#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p = &x;
    cout<<p;
    cout<<endl<<(*p = 90)<<endl;
    cout<<x;
}