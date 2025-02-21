#include <iostream>
using namespace std;
void linearsearch(int arr[], int n, int key)
{
      // bool flag = false;
    for(int i = 0; i <n; i++)
    {
        if(arr[i]==key)
        {   // flag = true;
            cout<<"yes the element is present in the array index-"<<i;
            return;
        }
        
    }
     cout<<"Element not present in the array";
     /*if(flag == true)
     {
       cout<<"yes the element is present int he array";

     }
       else
       cout<<"Element not present in the array";
     */
    
}
int main()
{  int n;
    cin>>n;

   int arr[n]; //= {10, 20, 30, 40, 50};
      for(int i = 0; i <n; i++)
      {
        cin>>arr[i];
      }
      int key;
      cout<<"Enter the value u want to search in array";
       cin>>key;
//    int n = sizeof(arr)/sizeof(arr[0]);
     linearsearch(arr, n, key);
   
    return 0;
}