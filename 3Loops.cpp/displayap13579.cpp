#include <iostream>
using namespace std;
int main()
{
  int i = 1, a = 1;
  int n;
  cout<<"upto how many terms u want to print the series";
cin>>n;
//   for(; i <=2 * n - 1;i = i +2)
//   {
//     cout<<i<<endl;
//   }
   for(; i <= n; i++)
   {
      cout<<a<<endl;
      a = a+ 2;
   }
    return 0;
}