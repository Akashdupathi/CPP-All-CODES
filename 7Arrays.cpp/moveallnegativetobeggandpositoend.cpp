#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void twopointer(vector<int>&v)
{
//method -  two pointer approach
 int n = v.size();
 int i =0;
 int j = n-1;
 while(i<j)
 {
    if(v[i]<0) i++;
    else if(v[j] > 0) j--;
     //if(i>j) break; 
    else if(v[i]<0 && v[j]>0)
    {
       int temp = v[i];
       v[i] = v[j];
       v[j] = temp; 
        i++; j--;

    }

 }
 
 
}
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(-2);
    v.push_back(9);
    for (int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    //sort(v.begin(), v.end());
    // for (int i = 0; i< v.size(); i++)
    // {   for(int j = 0; j<v.size(); j++)
    //     {
    //     if(v[j]>v[j+1])
    //     {
    //         int temp = v[j];
    //         v[j] = v[j+1];
    //         v[j+1] = temp;
    //     }
    // }
    // }
    //sort(v); //two pass method
    twopointer(v);   //two pointer method--one pass 
   
    
    for (int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}