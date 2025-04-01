#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(const vector<int>& nums)
{
     int total = 0;
     for (int x : nums)
     {
          total += x;
     }

     int leftSum = 0;
     for (int i = 0; i < nums.size(); i++)
     {
          // rightSum 是 total 扣除左边之和和自己
          int rightSum = total - leftSum - nums[i];
          if (leftSum == rightSum)
          {
               return i;
          }
          leftSum += nums[i];
     }
     return -1;
}

int main()
{
     vector<int> vec = {2, 1, -1};
     cout << pivotIndex(vec) << endl; // 输出 0
     return 0;
}
