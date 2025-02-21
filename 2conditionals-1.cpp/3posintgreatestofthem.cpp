#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cin>>a>>b>>c;
    if(a > b && a>c)
    cout<<"a is the gretest";
    else{
        if(b > c)
        cout<<"b is the greatest";
        else
        cout<<"c is the greatest";
    }

    return 0;
}