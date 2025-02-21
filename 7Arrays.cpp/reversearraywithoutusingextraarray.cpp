#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int>v)
{
 for(int i = 0; i< v.size(); i++)
 {
    cout<<v[i]<<endl;
 }
}

void reverseArray(vector<int>&a) {
     
    for(int i = 0; i < a.size()/2; i++)
    {
           int temp;
            temp = a[i];
            a[i] = a[a.size()-1-i];
            a[a.size()-1-i] = temp;
    }
    
}
void reversepart(vector<int>&v, int i, int j)
{
      while(i<=j)
      {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main()
{
      vector <int>v;
      int n;
      cout<<"enter no of elements in vector";
      cin>>n;
      for(int i = 0; i<n; i++)
      {
        int q;
        cin>>q;
        v.push_back(q);
      }
      display(v);
     // reverseArray(v);
    //  int i = 0;
    //  int j = v.size()-1;
    //  while(i<=j)
    //  {
    //     int temp = v[i];
    //     v[i]=v[j];
    //     v[j]= temp;
    //     i++;
    //     j--;
    //  }
    // for(int i = 0, j = v.size()-1; i <=j; i++, j--)
    // {
    //     int temp = v[i];
    //     v[i]=v[j];
    //     v[j]= temp;
       
    // }
    // reverse(v.begin(), v.end());
    //   display(v);
 reversepart(v,0,2);
 display(v);

    return 0;
}