#include <iostream>
using namespace std;
int main()
{

    int x;
    cin>>x;
    
        switch(x)
        {
            case 1:   cout<<"Monday";
                       break;
            case 2:   cout<<"Tuesday";
                       break;
    
            case 3:   cout<<"Wednesday";
                       break;
            case 4:   cout<<"Thrusday";
                       break;
            case 5:   cout<<"friday";
                       break;
            case 6:   cout<<"saturday";
                       break;
            case 7:   cout<<"sunday";
                       break;
            default :  cout<<"invalid input";
        }
    
    return 0;
}