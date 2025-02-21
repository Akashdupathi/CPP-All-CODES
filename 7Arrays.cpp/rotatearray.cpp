#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void reversepart(vector<int>&v, int i, int j)
{
      while(i<=j)
      {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main()
{

    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i< n; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    int k;
    cin>>k;
    if(k>n)
    {
        k = k%n;
    }
    reversepart(v, 0, n-k-1);
    reversepart(v, n-k, n-1);
    reversepart(v, 0, n-1);
    for(int i = 0; i< n; i++)
    {
       cout<<v[i]<<endl;
    }
    return 0;
}
