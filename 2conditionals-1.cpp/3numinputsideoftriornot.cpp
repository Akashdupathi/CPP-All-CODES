#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(a + b > c && a + c > b && b + c > a)
    {
        cout<<"The three numbers forms a triangle";

    }
    else{
        cout<<"The three numbers donot forms a triangle";
    }
    return 0;
}