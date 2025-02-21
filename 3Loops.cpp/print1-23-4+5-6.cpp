#include <iostream>
using namespace std;
int main()
{

    int n;
    //int sum = 0;
    cout<<"Upto how many terms u want to print sum of the series";
    cin>>n;
    // for(int i = 1; i <= n; i++)
    // {
    //     if(i % 2!=0)
    //     sum = sum + i;
    //     else sum = sum - i;

    // }
    // cout<<"The sum of the series is "<<sum;
    if(n %2 ==0)
    {
        cout<<-(n / 2);
    }
    else
    {
        cout<<-n/2 + n;
    }
    return 0;
}