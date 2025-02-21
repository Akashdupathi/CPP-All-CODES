#include <iostream>
using namespace std;
int sumofarr(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i <n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{  int n;
    cin>>n;

   int arr[n];// = {10, 20, 30, 40, 50};
   for(int i = 0; i <n; i++)
   {
       cin>>arr[i];
   }
   
     //cout<<sumofarr(arr, n);
     
    int sum = 0;
    for(int i = 0; i <n; i++)
    {
        sum = sum + arr[i];
    }
   cout<<sum;
    return 0;
}