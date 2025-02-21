#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   vector <int> v;
   v.push_back(9);
   v.push_back(10);
   v.push_back(6);
   v.push_back(12);
   v.push_back(11);
   v.push_back(6);
   v.push_back(0); //7 elements
   int x = 11;
   int idx = -1;
//    for(int i = 0; i<v.size(); i++)
//    {
//     if(v[i] == x)
//     {
//         idx = i;
//     }

//    }
for(int i = v.size(); i>0; i--)
   {
    if(v[i] == x)
    {
        idx = i;
        break;
    }

   }
   cout<<idx;

    return 0;
}