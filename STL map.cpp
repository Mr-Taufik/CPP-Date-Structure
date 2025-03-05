#include <iostream>
#include <map>
using namespace std;

int main()
{
     //映射map 提供对数时间的有序值对结构，底层是红黑树
     map<int, int> mp;

     mp[2] = 1;
     mp.erase(2);
     mp[2] = 3;
     cout << mp.count(2) << endl;
     //当你需要查找、插入或删除元素时，都是通过键来操作。例如，在代码中使用 mp[2] 表示以 2 作为键来存取对应的值
     //mp.count(2) 用于统计 map 中键为 2 的元素个数。对于 std::map 来说，
     // 由于每个键都是唯一的，所以返回的值只能是 0（不存在该键）或者 1（存在该键）
     cout << mp.empty() << endl;
     cout << mp.size() << endl;

     /*
     mp.clear();
     cout << mp.empty() << endl;
     if(mp.find(2) != mp.end())
     {
          cout << "yes" << endl;
     }
     else
     {
          cout << "no" << endl;
     }
      */

     for(auto &pr : mp)
     {
          cout << pr.first << ' ' << pr.second << endl;
     }


     return 0;
}
