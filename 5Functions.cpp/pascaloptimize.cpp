#include <iostream>
using namespace std;
int main()
{
  int n;
   cin>>n;
    int nsp = n-1;
    for(int i = 0; i <= n; i++)
    {     int curr = 1;
        for(int k = 1; k <=nsp; k++)
        {
            cout<<" ";
        }
        nsp--;

        for(int j = 0; j <=i; j++)
        {  cout<<curr<<" ";
           curr = curr*(i-j)/(j+1);
           
        }
        cout<<endl;
    }
    return 0;
}