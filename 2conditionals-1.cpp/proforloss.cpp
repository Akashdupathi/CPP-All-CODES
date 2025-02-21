#include <iostream>
using namespace std;
int main()
{

    int cp, sp;
    cout<<"Enter cost price: ";
    cin>>cp;
     cout<<"Enter selling  price: ";
    cin>>sp;
    if(sp>cp)
    cout<<"The seller has made profit of "<<(sp-cp)<<endl;
    if(sp <cp)
     cout<<"The seller has made loss of "<<(cp-sp)<<endl;
     else
      cout<<"The seller has made neither profit nor loss"<<endl;
    return 0;
}