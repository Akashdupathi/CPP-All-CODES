#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int sum = 0;
    while(x >0)
    {
        sum = sum + x % 10;
        x/=10;
    }
    cout<<"The sum of digits is "<<sum;
    return 0;
}