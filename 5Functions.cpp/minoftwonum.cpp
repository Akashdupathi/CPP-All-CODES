#include <iostream>
using namespace std;
int minof(int a, int b){
   if(a>b) return b;
   else
   return a;
}
int main(void)
{
    int a, b;
    cin>>a>>b;
    cout<<minof(a,b);
   return 0;
}