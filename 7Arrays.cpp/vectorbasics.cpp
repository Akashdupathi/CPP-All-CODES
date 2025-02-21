// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int>v; //you need not mention the size
//     //inserting / input do not use []
//     //  v.push_back(6);
//     //  cout<<v.size()<<endl;
//     // v.push_back(1);
//     // cout<<v.size()<<endl;
//     // v.push_back(9);
//     // cout<<v.size()<<endl;
//     // v.push_back(0);
//     // cout<<v.size()<<endl;
//     v.push_back(6);
//     cout<<v.capacity()<<endl;
//    v.push_back(1);
//    cout<<v.capacity()<<endl;
//    v.push_back(9);
//    cout<<v.capacity()<<endl;
//    v.push_back(0);
//    cout<<v.capacity()<<endl;

//     // v[0] = 6;
//     // v[1] = 1;
//     // v[2] = 9;     //segmentation fault
//     // v[3] = 0;
//     //if you want to update / access
//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" "; 



//     return 0;
// }
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
//    vector <int> v(5);
//    for(int i = 0; i< v.size(); i++)
//    {
//        cin>>v[i];
//    }
   
//    for(int i = 0; i< v.size(); i++)
//    {
//        cout<<v[i];
//    }
int n ;
cout<<"enter no of elements you want to take input";
cin>>n;
vector <int> v;
for(int i = 0; i< n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i = 0; i< n; i++)
{
    cout<<v.at(i)<<" "<<v[i]<<endl;
    
}
cout<<endl;
sort(v.begin(), v.end());
for(int i = 0; i< n; i++)
{
    cout<<v.at(i)<<" "<<v[i]<<endl;
    
}
   

    return 0;
}