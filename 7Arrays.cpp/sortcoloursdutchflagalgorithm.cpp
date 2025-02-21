#include <iostream>
#include <vector>

using namespace std;

void sortcolours(vector<int> &nums)
{
   int low = 0; //Dutch flag Algorithm
   int mid = 0;
   int high = nums.size()-1;
   while(mid<= high)
   {
       if(nums[mid]==2)
        {
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
        else if(nums[mid]==0)
        {
            int temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++; mid++;
        }
        else if(nums[mid] == 1)
        {
            mid++;
        }
   }
}
int main()
{
   vector <int> v;
   int n;
   cin>>n;
   for(int i = 0; i< n; i++)
   {
    int q;
    cin>>q;
    v.push_back(q);

   }
  sortcolours(v);
  for(int i = 0; i<v.size(); i++)
  {
  cout<<v[i];

  }
    return 0;
}