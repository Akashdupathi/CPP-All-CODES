#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  int max = INT16_MIN;
  for(int i = 0; i<n; i++)
  {
    if(max<a[i])
    {
        max = a[i];
    }

  }
  int smax = INT16_MIN;
    for(int i = 0; i<n; i++)
    {
        if(smax<a[i] && a[i] != max)
        {
            smax = a[i];
        }
    }
     cout<<smax;

    return 0;
}