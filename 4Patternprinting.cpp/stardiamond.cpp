  #include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
   int nsp = n-1;
   int nsr= 1;
//    for(int i = 1; i <= n; i++)
//    {
//     //spaces
//     for(int j = 1; j <= nsp; j++)
//     {
//         cout<<" ";
//     }
//     nsp--;
//     for(int k = 1; k <= nsr; k++)
//     {
//         cout<<"*";
//     }
//     nsr+=2;
//     cout<<endl;
//    }
//    nsp = 1;
//    nsr =2*n-3;
//    for(int i = 1; i <=n-1; i++)
//    {
//     for(int j = 1; j <=nsp; j++)
//     {
//          cout<<" ";
//     }
//     nsp++;
//     for(int k = 1; k <= nsr; k++)
//     {
//         cout<<"*";
    
//     }
//     nsr-=2;
//     cout<<endl;
//    }
   for(int i = 1; i <= 2 * n-1;i++)
   {
    for(int j = 1; j <=nsp; j++)
    {
        cout<<" ";
    }

    if(i <=n-1) nsp--;
    else nsp++;
    for(int k = 1; k <=nsr;k++)
    {
       cout<<"*";
    }
    if(i<=n-1) nsr+=2;
    else nsr-=2;
    cout<<endl;
   }

    return 0;
}

 