#include <iostream>
using namespace std;
int main()
{
    int i = 1, a = 1, n;
    cout<<"How many terms u want to print the series";
    cin>>n;

    for(; i <= n; i++)
    {
        cout<<a<<endl;
        a = 2 * a;
    }
    return 0;
}