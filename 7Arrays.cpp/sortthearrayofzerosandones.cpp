#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sort(vector <int> &v)
{   int no0 = 0;
    int no1 = 0;
    for(int i = 0; i< v.size(); i++)
    {
        if(v[i] == 0)    //twopassmethod
        no0++;
        else   
        no1++;
    }
    for(int i = 0; i< v.size(); i++)
    {
        if(i>=0 && i<no0)
        {
            v[i] = 0;

        }
        else v[i] =1;
       
    }
    

}
void twopointer(vector<int>&v)
{
    int start = 0;
    int end = v.size() - 1;
//     for(int i = 0; i< v.size()/2+1;i++){
//     if(v[start]> v[end])
//     {
//         int temp = v[start];
//         v[start] = v[end];
//         v[end] = temp;
//         start++; end--;
//     }
//    else if(v[end]==1) end--;
//    else if(v[start]==0) start++;

//  }
 
//  while(start<end)
//  {
 
//  if(v[start]> v[end])
//     {
//         int temp = v[start];
//         v[start] = v[end];
//         v[end] = temp;
//         start++; end--;
//     }
//    else if(v[end]==1) end--;
//    else if(v[start]==0) start++;
 
//  }
 //method - 2 two pointer approach
 int n = v.size();
 int i =0;
 int j = n-1;
 while(i<j)
 {
    if(v[i]==0) i++;
    else if(v[j] == 1) j--;
     //if(i>j) break; 
    else if(v[i]==1 && v[j]==0)
    {
        v[i] =0;
        v[j]=1;
        i++; j--;

    }

 }
 
 
}
int main()
{
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
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
