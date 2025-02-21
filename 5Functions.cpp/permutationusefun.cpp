#include <iostream>
using namespace std;
int fact(int n)
{
   int f = 1;
   for(int i = 2; i <= n; i++)
   {
    f*=i;
   }
   return f;
}
int permutation(int n, int r)
{    
     return fact(n)/fact(n-r);
     
}
int main(void)
{    

    int n;
    int r;
    cin>>n>>r;
    if(n>=r  && r >=0)
    cout<<permutation(n, r);
    else
     cout<<"Invalid input";
   
   return 0;
}