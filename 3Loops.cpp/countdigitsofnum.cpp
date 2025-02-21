#include <iostream>
using namespace std;
int main()
{
    int x, count = 0;
   
    cin>>x;
    int a = x;
    while(x>0)
    {
      count++;
      x/=10;
    }
    if(a == 0) 
    cout<<"The number of digits is 1"; 
    else
    cout<<"The digits of the given number is "<<count;
    return 0;
}