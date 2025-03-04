#include <iostream>
#include <set>
using namespace std;

int main()
{
     //提供对数据的插入，查找的集合数据结构，删除，底层原理是红黑树
     //自动排序：set 会自动按照一定的顺序（默认是从小到大）对存入的元素进行排序
     //唯一性：在 set 中，每个元素都是唯一的。即使你尝试插入重复的元素，
     // set 也只会保留一个实例。示例代码中，插入两次的数字 2 最终只会保留一个。
     set<int> st;
     st.insert(1);
     st.insert(2);
     st.insert(2);
     st.insert(3);
     st.insert(0);

     for(auto &ele : st)
          cout << ele << endl;
     //会自动对输入进去的数据进行排序，最后输出是 0 1 2

     if(st.find(1) != st.end())
     {
          cout << "yes" << endl;
     }

     st.erase(2);
     //删除指定键的元素，返回删除的元素个数
     // 删除从begin到find(8)的所有元素
     // s.erase(s.begin(), s.find(8));
     for(auto &ele : st)
          cout << ele << endl;

     if(st.count(2))
     {
          cout << "yes" << endl;
     }
     cout << st.size() << endl;
     //返回 set 中的元素个数。
     st.clear();
     cout << st.empty() << endl;

     return 0;
}
