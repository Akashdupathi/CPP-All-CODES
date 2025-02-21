#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x >=91)
    cout<<"excellent";
    else if(x>=81)
    cout<<"very good";
     else if(x>=71)
    cout<<"Good";
     else if(x>=61)
    cout<<"can do better";
     else if(x>=51)
    cout<<"Average";
     else if(x>=41)
    cout<<"below average";
    else
    cout<<"fail";
    return 0;
}