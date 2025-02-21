#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int* arr = (int*)malloc(2*sizeof(int));
        *returnSize = 2;
    
              
         for(int i = 0; i<numsSize; i++)
         {
            for(int j = i+1; j<numsSize;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    *arr = i;
                    *(arr+1) = j;
                   break;
    
                }
            }
         }
           return arr;
    
    }
    int main()
    {

    //    int n;
    //    cin>>n;

    //     int arr[n];
    //     for(int i = 0; i< n; i++)
    //     {
    //         cin>>arr[i];
    //     }
    //     int *returnSize;
    //     int target;
    //     cout<<"Enter target";
    //     cin>>target;
    //     int* address = twoSum(arr, n, target, returnSize);
    //     for(int i = 0; i<*returnSize; i++)
    //     {
    //         cout<<address[i];
    //     }
    int x;
    cout<<"Enter target";
    cin>>x;
     vector<int> v;
     int n;
     cout<<"Enter array size: ";
     cin>>n;
     cout<<"Enter array elements: ";
     for(int i =0; i<n;i++)
     {
        int q;
        cin>>q;
        v.push_back(q);
     }
    for(int i = 0; i<=v.size()-2; i++)
    {
        for(int j = i+1; j<=v.size()-1;j++)
        {
            if(v[i]+v[j]==x)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }



        return 0;

    }