#include <iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the size of star traingle flipped";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {         int a = 1;
        for(int j = 1; j <= n; j++)
        {
            if(i+j >= n + 1)
            {
                cout<<a;
                a++;

            }
            else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
    // for(int i =1; i <=n;i++)
    // {
    //     for(int j = 1; j <=n-i;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 1; j <=i;j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;

    // }
    return 0;
}