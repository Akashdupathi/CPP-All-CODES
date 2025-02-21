#include <iostream>
using namespace std;
int main()
{
   int i = 1;
   for(; i <= 26; i++)
   {
    cout<<(char)(i + 64)<<"-"<<i+64<<endl;
   }
    return 0;
}