#include <iostream>
using namespace std;
int main()
{

    int x;
    cout<<"Enter a Number";
    cin>>x;
    if(x>0){
    if(x % 5== 0)
    cout<<"Divisible by 5"<<endl;
    if(x % 5 != 0)
    cout<<"Not divisible by 5";}
    else{
        cout<<"The number is negative";
    }

    return 0;
}