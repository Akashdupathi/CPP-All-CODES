#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
   int nsp = n-1;
   int nsr= 1;
   for(int i = 1; i <= n; i++)
   {
    //spaces
    for(int j = 1; j <= nsp; j++)
    {
        cout<<" ";
    }
    nsp--;
    for(int k = 1; k <= nsr; k++)
    {
        cout<<"*";
    }
    nsr+=2;
    cout<<endl;
   }
    return 0;
}

