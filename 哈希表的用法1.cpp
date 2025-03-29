#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target)
{
     unordered_map<int, int> hash;
     for(int i = 0; i < nums.size(); ++i)
     {
          hash[nums[i]] = i;
     }

     for(int i = 0; i < nums.size(); i++)
     {
          int complement = target - nums[i];

          if(hash.find(complement) != hash.end() && hash[complement] != i)
          {
               return {i, hash[complement]};
            /*这部分代码检查哈希表中是否存在一个键等于 complement（即 target - nums[i]）的元素。
            如果存在，find 会返回一个指向该键值对的迭代器；如果不存在，则返回 hash.end()。因此，这个判断表示“找到了补数”。

hash[complement] != i
这部分确保找到的补数不是当前遍历到的元素。因为在题目要求中，我们不能使用同一个元素两次（即不允许下标相同）。

return {i, hash[complement]};
当以上两个条件都满足时，说明已经找到了满足条件的两个数，它们的下标分别是当前的 i 和存储在哈希表中的 hash[complement]。这行代码返回一个包含这两个下标的 vector。*/
          }
     }
     return {};
}
int main()
{
     vector<int> nums = {2, 7, 11, 15};
     int target = 9;

     vector<int> result = twoSum(nums, target);
     if (!result.empty()) {
          cout << "找到的下标是: [" << result[0] << ", " << result[1] << "]" << endl;
     } else {
          cout << "未找到符合要求的两数之和。" << endl;
     }
}
