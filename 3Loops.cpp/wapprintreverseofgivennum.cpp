#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int reversenum = 0;
    while(x >0)
    {
        reversenum = reversenum * 10 + x % 10;
          x/=10;
    }
    cout<<"The reverse of given number is "<<reversenum;
    return 0;
}