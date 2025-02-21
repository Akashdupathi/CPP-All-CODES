#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);  // code gives error if we didn't mention size. 
    for(int i = 0; i< 5; i++)
    {
        cin>>v[i];
    }
    for(int i = 0; i< 5; i++)
    {
       cout<<v[i]<<endl;
    }
    /*
    if size is not mentioned  taking user input looks like---
    vector <int> v;
    for(int i = 0; i <  5; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    */

    return 0;
}