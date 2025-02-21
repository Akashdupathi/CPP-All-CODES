#include <iostream>
using namespace std;
void swap(int &a, int &b)//pass by reference
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<"before swapping"<<a<<" "<<b<<endl;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // cout<<"After swapping "<<a<<" "<<b;
    //  int temp;
    //  temp = a;
    //  a = b;
    //  b = temp;
    // int *p = &a, *q = &b;
    // swap(p, q);  
    swap(a,b);
     cout<<"After swapping "<<a<<" "<<b;
    return 0;
}

