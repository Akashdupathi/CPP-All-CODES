#include <iostream>
using namespace std;
int main()
{    int n;
      cout<<"Enter size of the odd Number triangle";
      cin>>n;
    for(int i = 1; i<=n;i++)
    {
        for(int j = 1; j <=i;j++)
        {
            cout<<2*j-1;
        }
        cout<<"\n";
        }
    return 0;
}