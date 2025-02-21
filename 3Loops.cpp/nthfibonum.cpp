#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter which fibonacii num you to want to know";
    cin>>n;
    int first = 0, second = 1, next = 0;
   if(n ==1) cout<<first;
   else if(n == 2) cout<<second;
   else {
    for(int i = 1; i <= n-2; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }
    cout<<next;
}
     
    return 0;
}
