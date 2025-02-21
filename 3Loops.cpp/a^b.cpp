#include <iostream>
using namespace std;
int main()
{

    int a, b, power = 1;
    cin>>a>>b;
    if(b > 0){
    for(int i = 1; i <= b; i++)
    {
        power = power * a;

    }
    cout<<power;
}
else {
    for(int i = 1; i <= -b; i++)
    {
        power = power * a;

    }
        cout<< (1.0/power);
   
  
}
    return 0;
}