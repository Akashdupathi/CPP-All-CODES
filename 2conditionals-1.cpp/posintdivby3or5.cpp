#include <iostream>
using namespace std;
int main()
{

    int x;
    cin>>x;
    if(x % 3 == 0 || x % 5 == 0)
    cout<<"The number is divisible by 3 or 5";
    else
    cout<<"The number is not divisible by both 3 and 5";
    return 0;
}