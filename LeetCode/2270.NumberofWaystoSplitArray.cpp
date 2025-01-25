#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2,3,1,0};
    int count = 0;
     int sum = 0,prefix_sum=0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
      
    }
    for (int i = 0; i < nums.size() - 1; i++) // Split at index i (right part must be non-empty)
    {
        prefix_sum += nums[i]; // Running prefix sum
        int suffix_sum = sum - prefix_sum; // Compute suffix sum
        if (prefix_sum >= suffix_sum)
        {
            count++;
        }
    }
return count;
}