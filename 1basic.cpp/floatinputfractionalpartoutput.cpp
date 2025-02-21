#include <iostream>
using namespace std;
int main()
{
    float x;
    cin>>x;
    if(x >0)
    cout<<(x - (int)x);
    else
    cout<<((x + 1) - (int)x);
    return 0;
}