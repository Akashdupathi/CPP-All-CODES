#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int count = 0;
    for(int i = 2; i <=x /2; i++)
    {
        if(x % i == 0)
         {  count = 1;
           
            break;
         }
       
         
    }
    if(x == 1) cout<<"1 is neither prime nor composite";
    else if(count == 1)
    cout<<"The number is composite number";
    else
    cout<<"The number is prime number";
    



    return 0;
}