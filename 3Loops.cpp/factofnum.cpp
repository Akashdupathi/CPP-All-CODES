#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==1||n==0)
    return 1;
    else
    return n * fact(n-1);

}
int main()
{
    int n;
    cout<<"Enter the number to calculate factorial of that number";
    cin>>n;
    // int fact = 1;
    //  for(int i = 1; i <=n; i++)
    //  {
    //     fact = fact * i;

    //  }
    //  cout<<"The factorial of given number is "<<fact;
    cout<<"The factorial of given number is: "<<fact(n);
    return 0;
}