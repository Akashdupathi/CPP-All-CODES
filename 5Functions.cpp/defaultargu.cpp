#include <iostream>
using namespace std;
void fun(int x = 7, int y = 8)
{
    cout<<x<<" "<<y<<endl;
}
int main()
{
     fun();
     fun(4,6);
     fun();
     fun(4);
    return 0;
}