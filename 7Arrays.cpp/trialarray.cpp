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
{
   int arr[5] = {10, 20, 30, 40, 50};

   int n = sizeof(arr)/sizeof(arr[0]);
     cout<<sumofarr(arr, n);
   
    return 0;
}