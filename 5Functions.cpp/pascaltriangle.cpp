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
int combination(int n, int r)
{    
     return fact(n)/(fact(n-r)*fact(r));
     
}
int main(void)
{    

     int n;
     cout<<"How many lines of pascal triangle u want";
     cin>>n;
     int nsp = n-1;
     for(int i = 1; i <=n; i++)
     {
        for(int k = 1; k <=nsp; k++)
        {
            cout<<" ";
        }
        nsp--;
        for(int j = 1; j <= i; j++)
        {
            cout<<combination(i-1, j-1)<<" ";
        }
        cout<<endl;
     }
     
   
   return 0;
}