#include <iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the size of the floyd's triangle";
    cin>>n;
    int a = 1;
    for(int i = 1; i <= n; i++)
    {      if(i %2!=0) a = 1;
           else a = 0;
        for(int j = 1; j <= i; j++)
        {
            cout<<a;     //(i+j) % 2 ==0 cout<<1; another logic
            if(a ==0) a = 1;
            else
            a =0;
        }
        cout<<endl;
    }
    return 0;
}