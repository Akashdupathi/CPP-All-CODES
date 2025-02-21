#include <iostream>
using namespace std;
void fandl(int n, int* p, int* q)
{
        *q = n % 10;
        while(n>9)
        {
            n/=10;
        }
        *p = n;

}
int main()
{
    int n;
     cin>>n;
     int firstdigit, lastdigit, *ptr1, *ptr2;
     ptr1 = &firstdigit;
     ptr2 = &lastdigit;
     fandl(n, ptr1, ptr2);
     cout<<firstdigit<<" "<<lastdigit;
    return 0;
}