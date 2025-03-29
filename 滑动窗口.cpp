#include <iostream>
#include <vector>
using namespace std;

long long atMost(const vector<int>& nums, int S)
{
     if(S < 0)  return 0;

     long long res = 0;
     int left = 0;
     int windowSum = 0;

     for(int right = 0; right < (int)nums.size(); ++right)
     {
          windowSum += nums[right];

          while(windowSum > S)
          {
               windowSum -= nums[left];
               left++;
          }

          res += (right - left + 1);

     }
     return res;
}

long long numSubarraysWithSum(const vector<int>& nums, int goal)
{
     return atMost(nums, goal) - atMost(nums, goal - 1);
}



int main()
{
     vector<int> nums1 = {0, 1, 1, 1, 1};
     int goal1 = 3;

     cout << numSubarraysWithSum(nums1, goal1) << endl;

     vector<int> nums2 = {0, 0, 0, 0, 0};
     int goal2 = 0;
     cout << numSubarraysWithSum(nums2, goal2) << endl;


}
