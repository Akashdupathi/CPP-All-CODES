#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter no of students";
     int n;
    
     cin>>n;
    int marks[n];
    cout<<"Enter the Marks";
    for(int i = 0; i<n; i++)
    {
        cin>>marks[i];

    }
    for(int i = 0; i<n; i++)
    {
        if(marks[i]<35)
        cout<<i<<endl;

    }
    return 0;
}