#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
     int N;
     cin >> N;
     vector<int> nums(N);
     for (int i = 0; i < N; i++)
     {
          cin >> nums[i];
     }

     // 用来存储当前最长递增子序列的末尾元素
     vector<int> subseq;
     for(int num : nums)
     {
          // lower_bound 找到第一个不小于 num 的位置
          auto it = lower_bound(subseq.begin(), subseq.end(), num);
          if (it == subseq.end())
          {
               subseq.push_back(num);
          }
          else
          {
               *it = num;
          }
     }

     cout << subseq.size() << endl;
     return 0;
}




lower_bound
功能
作用：在有序区间中查找第一个不小于（≥）某个目标值的元素位置。

返回值：返回一个迭代器，指向第一个满足条件的元素。如果没有这样的元素，则返回尾迭代器（end）。

使用场景
查找插入位置：例如在保持序列有序的情况下，想找到一个数字应该插入在哪个位置，使得插入后序列依然有序。

算法示例：最长递增子序列算法中用来查找合适的位置来替换候选序列内的元素，从而保持“尾部值”尽可能小，便于延长序列。

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 3, 5, 7};
    int target = 3;
    
    // 使用 lower_bound 找到第一个不小于 target 的位置
    auto it = lower_bound(v.begin(), v.end(), target);
    
    if (it != v.end()) {
        cout << "lower_bound 找到的数字是: " << *it << ", 位置索引是: " << (it - v.begin()) << endl;
    } else {
        cout << "没有找到不小于 " << target << " 的元素" << endl;
    }
    
    return 0;
}

upper_bound
功能
作用：在有序区间中查找第一个大于（>）某个目标值的元素位置。

返回值：返回一个迭代器，指向第一个满足条件（大于目标值）的元素。如果没有这样的元素，则返回尾迭代器（end）。

使用场景
区间统计：常用来计算某个目标值在有序序列中出现的次数。例如，两个查找结果之间的距离就是该目标值出现的次数。

查找右边界：用来确定所有等于目标值的元素的末尾位置，这在需要插入新元素或者统计重复元素时非常有用



  




