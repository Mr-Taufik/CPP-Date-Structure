#include <iostream>
#include <vector>
using namespace std;


int maximunCandies(vector<int>& candies, int k)
{
     int left = 1;
     int right = 0;
     ///这里是确定谈过最大的数字
     for(int c : candies)
     {
          right = max(right, (int)c);
     }

     int ans = 0;
     ///这个是设为孩子们能获得的最大糖果数字
     while(left <= right)
     {
          int mid = (left + right) / 2;
          ///是当前搜索区间的中间值，也是当前猜测的每个孩子可以分到的糖果数
          int count = 0;
          ///用来记录根据当前 mid 值能够得到的总份数
          for(int c : candies)
          {
               count += c / mid;
               ///对于每个 c，c / mid 表示可以从该糖果数中切分出多少份大小为 mid 的份额
               if(count >= k) break;
               ///剪枝优化：如果 count 已经大于或等于 k，则提前退出循环，不再继续计算。这可以减少不必要的循环
          }

          if(count >= k)
          {
               ans = mid;
               left = mid + 1;
          }
          else
          {
               right = mid - 1;
          }

     }


     return ans;
}
int main()
{
     vector<int> candies = {8, 9, 8};
     ///这里是有多少堆糖果
     int k = 3;
     ////有几个孩子
     cout << maximunCandies(candies, k) << endl;

     return 0;
}
