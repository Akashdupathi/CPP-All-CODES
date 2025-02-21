#include <iostream>
using namespace std;
int main()
{

    int x;
    cout<<"Enter a Number";
    cin>>x;
    if(x % 2 == 0)
    cout<<"even"<<endl;
    if(x % 2 != 0)
    cout<<"odd";

    return 0;
}