#include <iostream>
using namespace std;
int main()
{
     int arr[] = {4, 2, 6, 1, 7};
     int *ptr = arr; //address of very first element arr[0];
     cout<<ptr<<endl<<&arr[0];
     cout<<endl<<ptr[0]<<endl;
     *(ptr+3) = 6;
    for(int i = 0; i < 5; i++)
    {
        cout<<ptr[i];
        cout<<endl;
    }

    return 0;
}